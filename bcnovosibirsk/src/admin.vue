<template>

    <form v-on:submit.prevent="addTraining">
        <input v-model="training.date" type="date"/>
        <input v-model="training.place"/>
        <input v-model="training.time" type="time"/>
        <input type="submit"/>


    </form>

</template>


<script>

    let data = {

        training: {
            date: "",
            place: "test",
            time: ""
        }
    };

    export default {
        data: () => data,
        methods: {
            addTraining: function () {

                console.log(this.training);
                let newTraining = {
                    date: this.training.date,
                    place: this.training.place,
                    time: this.training.time
                }

                this.db.ref("/trainings").push(newTraining);

            }
        }

    }

</script>
