package com.company;

public class MyClass {
    public native String stringFromC();
    public native int intFromC();

    public native String stringToC(String str);
    public native int intToC(int val);

    static {
        System.load("D:/BSU/Android/Task1_3/C++/x64/Debug/Task_1_3.dll");
    }
}
