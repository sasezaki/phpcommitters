--TEST--
phpcommitters() function
--SKIPIF--
<?php 

if(!extension_loaded('phpcommitters')) die('skip ');

 ?>
--FILE--
<?php
phpcommitters();

?>
--EXPECT--
Hello, World!
