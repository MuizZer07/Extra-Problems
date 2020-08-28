{
    // elements
    let $email =  $('input[name="email"]');
    let $password =  $('input[name="password"]');
    let $file =  $('input[name="file"]');
    let message_success = $('.message_success');
    let message_error = $('.message_error');
    let modal = $('#modal');
    let user_table = null;

    // api endpoints
    let $api_root = "http://localhost/BiTechX/api/v1/";
    let $create_new_user_api = $api_root + "addNewUser.php";
    let $get_all_users_api = $api_root + "getAllUsers.php";
    let $delete_user_api = $api_root + "deleteUser.php";
    let $edit_user_api = $api_root + "editUser.php";

    $(document).ready(function(){


        refreshMessages = function(){
            message_error.hide();
            message_success.hide();
        };

        var getUsers = function(){
            refreshDatatable();
            user_table = $('#userTable').DataTable({
                aProcessing: true,
                aServerSide: true,
                ajax: $.fn.dataTable.pipeline({
                    url: $get_all_users_api,
                    pages: 1 // number of pages to cache
                }),
                scrollY: 700,
                deferRender: true,
                scroller: true,
                columns: [
                    {"title": "Email", "data": "email"},
                    {"title": "Edit", "data": ""},
                    {"title": "Delete", "data": ""},
                ],
                columnDefs: [
                    {
                        targets: 0,
                        "render": (data, a, b) => {
                            return b[2];
                        }
                    },
                    {
                        targets: 1,
                        "render": (data, a, b) => {
                            return '<a type="button" class="btn btn-primary" onclick="edit_btn_function(\'' + b[0] + '\')" href="javascript:void(0);">Edit</a>';
                        }
                    },
                    {
                        targets: 2,
                        "render": (data, a, b) => {
                            return '<button class="btn btn-danger" onclick="delete_btn_function(\'' + b[0] + '\')" href="javascript:void(0);">Delete</button>';
                        }
                    }

                ]
            });
        };

        refreshMessages();
        getUsers();

        $('#submit_form').click(function (event) {
            event.preventDefault();
            refreshMessages();
            $.ajax({
                type: "POST",
                url: $create_new_user_api,
                dataType: "json",
                data: { email: $email.val(),
                    password: $password.val()
                },
                contentType: "application/x-www-form-urlencoded",
                "success": function (res) {
                    var status = res['success'];
                    var msg = res['message'];

                    if(status){
                        message_success.text(msg);
                        message_success.show();
                        getUsers();
                    }else{
                        message_error.text(msg);
                        message_error.show();
                    }

                    console.log(res);
                },
                "error": function (res) {
                    message_error.text("Backend Error");
                    message_error.show();
                }
            })
        });



    });

    function refreshDatatable() {
        if(user_table!=null){
            user_table.destroy();
            user_table = null;
            $('#userTable').empty();
        }
    }

    function delete_btn_function($id) {
        $.ajax({
            type: "DELETE",
            url: $delete_user_api + '/' + $id,
            dataType: "json",
            contentType: "application/x-www-form-urlencoded",
            "success": function (res) {
                var status = res['success'];
                var msg = res['message'];

                if(status){
                    message_success.text(msg);
                    message_success.show();
                    refreshDatatable()
                }else{
                    message_error.text(msg);
                    message_error.show();
                }

                console.log(res);
            },
            "error": function (res) {
                message_error.text("Backend Error");
                message_error.show();
            }
        })
    }

    function edit_btn_function($id) {
        console.log('show');
    }
}