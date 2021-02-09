import kotlin.io.*;
import java.io.*;

fun main(args:Array<String>){
    var a:Array<Int> ;
    var b:Array<Int> ;
    var alice:Int , bob:Int;
    for(i in 0..2){
        if(a[i]>b[i]){
            alice++;
        }else if (a[i]<b[i]){
            bob++;
        }
    }
    println($alice +"\t"+$bob);


    }