<template>

    <div class="container">
        <div class="row">
            <div class="col-md-4 col-md-offset-4">
                <div class="login-panel panel panel-default">
                    <div class="panel-heading">
                        <h3 class="panel-title">Please Sign In</h3>
                    </div>
                    <div class="panel-body">
                        <form v-on:submit.prevent="login" role="form">
                            <fieldset>
                                <div class="form-group">
                                    <input v-model="email" class="form-control" placeholder="E-mail" name="email" type="email"
                                           autofocus="">
                                </div>
                                <div class="form-group">
                                    <input v-model="password" class="form-control" placeholder="Password" name="password" type="password"
                                           value="">
                                </div>
                                <div class="checkbox">
                                    <label>
                                        <input name="remember" type="checkbox" value="Remember Me">Remember Me
                                    </label>
                                </div>
                                <!-- Change this to a button or input when using this as a form -->
                                <input type="submit" class="btn btn-lg btn-success btn-block" value="Login"/>
                            </fieldset>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>

</template>

<script>

    export default {
        data: () => {
            return {
                email: "",
                password: ""
            }
        },
        methods: {
            login: function () {
                this.fb.auth().signInWithEmailAndPassword(this.email, this.password).catch(function (error) {
                    var errorCode = error.code;
                    var errorMessage = error.message;
                });
            }
        },
        created: function () {
        }
    }

</script>