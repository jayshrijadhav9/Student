#include<iostream>
using namespace std;
#include "global.h"

class Student{
	
	private:
		int studid;
		String studname;
		int m1,m2,m3;
		
		Student();
		
		Student(int studid, String studname,int m1,int m2,int m3);
		
		public void totalMarks();
		public void Percentage();
		
		~Student();
	
};
