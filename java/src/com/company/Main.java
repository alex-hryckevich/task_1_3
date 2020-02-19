package com.company;

import java.io.Console;

public class Main {

    public static void main(String[] args) {
        MyClass p = new MyClass();

        var str = p.stringFromC();
        var val = p.intFromC();

        var str2 = p.stringToC("String from Java");
        var val2 = p.intToC(100);

        var a = str;
        var b = val;

        var c = str2;
        var d = val2;

    }


}

