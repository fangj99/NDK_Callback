package shulaing.han.ndk_callback;


public class DataProvider {

	public native void callCcode();
	public native void callCcode1();
	public native void callCcode2();
	
	//C����java�пշ��� shulaing.han.ndk_callback.DataProvider

	public void helloFromJava(){
		System.out.println("hello from java");
	}
	
	//C����java�еĴ�����int�����ķ���
	public int Add(int x,int y){
		System.out.println("the add result is : " + (x + y));
		return x + y;
	}
	
	//C����java�в���Ϊstring�ķ���
	public void printString(String s){
		System.out.println("in java code :" + s);
	}
	
}
