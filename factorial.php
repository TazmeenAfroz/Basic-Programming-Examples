<?php

function factorial($n){
    
    if($n == 0){
        return 1;
    }
    else 
    {
    for($i = $n - 1; $i > 0; $i--){
        $n = $n * $i;

       

    }
    return $n;
}
}

echo factorial(5);


?>