<template>

    <div class="panel panel-default">
        <div class="panel-heading">
            Расписание тренировок
        </div>
        <!-- /.panel-heading -->
        <div class="panel-body">
            <div class="table-responsive">
                <table class="table table-striped table-bordered table-hover">
                    <thead>
                    <tr>
                        <th>Дата тренировки</th>
                        <th>Время тренировки</th>
                        <th>Место тренировки</th>
                    </tr>
                    </thead>
                    <tbody>
                    <tr v-for="(item, i) in trainings">
                        <td>{{ item.date }}</td>
                        <td>{{ item.time }}</td>
                        <td>{{ item.place }}</td>
                    </tr>
                    </tbody>
                </table>
            </div>
            <!-- /.table-responsive -->
        </div>
        <!-- /.panel-body -->
        <br><br>
        <div class="panel-body">
            <div class="panel-heading">
                Расписание вылетов
            </div>
            <div class="table-responsive">
                <table class="table table-striped table-bordered table-hover">
                    <thead>
                    <tr>
                        <th>Дата вылета</th>
                        <th>Время вылета</th>
                        <th>Место вылета</th>
                    </tr>
                    </thead>
                    <tbody>
                    <tr v-for="(item, i) in flyings">
                        <td>{{ item.date }} </td>
                        <td>{{ item.time }}</td>
                        <td>{{ item.place }}</td>
                    </tr>
                    </tbody>
                </table>
            </div>
            <!-- /.table-responsive -->
        </div>
    </div>

</template>


<script>
let data = {
	trainings: [
    ],
    flyings: [
    ]
};


export default {
	data: () => data,
    created: function () {
        console.log(213);

        this.db.ref("/trainings").on("value", (res) => {

            this.trainings = res.val();
        })

        this.db.ref("/flyings").on("value", (res) => {
            this.flyings = res.val();
        })
    }
}

</script>