import Vue from 'vue';
import VueRouter from 'vue-router';
import App from './app.vue';
import firebase from 'firebase';
import homepage from './homepage.vue';
import login from './login.vue';
import admin from './admin.vue';
const conf = require('../private/config.json');

require("./styles.scss");

console.clear();
console.log(new Date());

// TODO: Replace the following with your own keys from firebase.google.com
firebase.initializeApp({
    apiKey: conf.firebase.apiKey,
    authDomain: "bcnovosibirsk.firebaseapp.com",
    databaseURL: "https://bcnovosibirsk.firebaseio.com",
    projectId: "bcnovosibirsk",
    storageBucket: "bcnovosibirsk.appspot.com",
    messagingSenderId: "131917477142"
});

Vue.prototype.db = firebase.database();
Vue.prototype.fb = firebase;

Vue.use(VueRouter);

let router = new VueRouter({
    mode: 'history',
    routes: [
        {path: '/', component: homepage},
        {path: '/login', component: login},
        {path: '/admin', component: admin},
    ],
    scrollBehavior (to, from, savedPosition) {
        return {x: 0, y: 0}
    }
});

const store = new Vuex.Store({
    state: {
        user: null
    },
    actions: {

    }
})


new Vue({
    el: '#app',
    render: function (h) {
        return h(App)
    },
    router,
    created: function () {
        this.fb.auth().onAuthStateChanged((user) => {
            if (user) {
                // User is signed in.
                var displayName = user.displayName;
                var email = user.email;
                var emailVerified = user.emailVerified;
                var photoURL = user.photoURL;
                var isAnonymous = user.isAnonymous;
                var uid = user.uid;
                var providerData = user.providerData;
                console.log(displayName, uid);
                this.$router.push({ path: '/'})
                this.user = user;
                // ...
            } else {
                // User is signed out.
                // ...
            }
        });
        // console.log('Created...');
        // console.log(firebase.auth().currentUser);
        // var vm = this;
        // console.log(firebase.auth());
        // firebase.auth().onAuthStateChanged((_user) => {
        //     console.log('state changed', _user);
        //     if (_user) {
        //         console.log('Firebase user: [' + _user.email + ']');
        //
        //         this.fb.database().ref('/users/' + _user.uid).on('value', (data) => {
        //             console.log(data.val());
        //             if (!this.preventLoadUser) {
        //                 Object.assign(_user, data.val());
        //                 vm.$store.commit('setUser', _user);
        //
        //             }
        //             this.preventLoadUser = false;
        //         });
        //
        //     } else {
        //         this.preventLoadUser = true;
        //         setTimeout(() => {
        //             this.preventLoadUser = false;
        //         }, 1000);
        //         vm.$store.commit('cleanUser');
        //         vm.$store.commit('cleanCart');
        //         console.log('Firebase user: [' + 'Logged out' + ']');
        //     }
        // });
    }
});


