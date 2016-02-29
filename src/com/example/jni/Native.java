package com.example.jni;

public class Native {
	static {
		System.loadLibrary("jni");
	}
	public static native int add(int a, int b);
}
