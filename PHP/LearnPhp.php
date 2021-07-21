 <?php

//intoduction  to PHP
function PHP(){
    echo "<br>"."<br>"."PHp is a server side language which is user to perform operations on database.";
}

?>

<?php
function intro() {
    $var1 = 12;
    $var2 = 18;
    $sum = $var1 + $var2;
    $num =array(12,18);
    
    echo gettype($var1)."<br>";
    echo "<br> The sum is: ".$sum."<br>";

    foreach($num as $num){
        echo $num . ", ";
    }

}
?>

<?php

// function string 
 function string(){
    echo "<br>"."<p>i am a string</p>";
 }

 ?>


<!-- // check if the database is connected or not -->
<?php
    include '.\db_connnection.php';

    $conn = OpenCon();
    echo "<h6>Connected Successfully...</h6>";

    
     
    //TODO:select query in Php  
   

    //write the select query to fetch * from the users table
    $select_query = "select studentId, studentName, gender, rollId, className, courseID, courseName, marks FROM studentinfo";

    //TODO:run the query  using the mysqli_query function
    $select_query_result = mysqli_query($conn,$select_query) ;


     //check the no of rows using the mysqli_num_rows fuction
     $total_rows =  mysqli_num_rows($select_query_result);

     //TODO:display the rows  data 
     $row = mysqli_fetch_array($select_query_result);
     
     //print the num of rows 
    echo "<b>The number of rows in studentinfo table is: </b>".$total_rows."</br>"; 

    //TODO:Echo all the users data in the web page.

    //  foreach ($row as $row) {
    //      echo $row ."<br>";
    //  }


    
    echo $row['studentId']."<br>";
    echo $row['studentName']."<br>";
    echo $row['rollId']."<br>";
    echo $row['subjectName']."<br>";
    echo $row['marks']."<br>";
    echo $row['gender']."<br>"; 
      
    CloseCon($conn);

?>