<?php
$Firstname=$_POST['Firstname'];
$Lastname=$_POST['Lastname'];
$Username=$_POST['Username'];
$Email_or_Mobile_Number=$_POST['Email_or_Mobile_Number'];
$Password=$_POST['Password'];

//Database connection
$conn=,new mysqli('localhost','root','','test');
if($conn->connect_error){
    die('connection Failed :  '.$conn->connect_error);

}else{
    $stmt=$conn->prepare("insert into register(Firstname,Lastname,Username,Email_or_Mobile_Number,Password)
    values(?,?,?,?,?)");
    $stmt->bind_param("sssss",$Firstname,$Lastname,$Username,$Email_or_Mobile_Number,$Password);
    $stmt->execute();
    echo "Register SUccessfullyy.....";
    $stmt->close();
    $conn->close();
}
?>