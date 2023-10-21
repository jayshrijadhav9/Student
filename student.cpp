#include<iostream>
using namespace std;
#include "student.h"
#include "global.h"


		Student(){
			studid=50;
			studname="john";
			m1=70;
			m2=80;
			m3=90;
		}
		
		Student(int studid, String studname,int m1,int m2,int m3){
			this->studid=studid;
			this->studname;
			this->m1=m1;
			this->m2=m2;
			this->m3=m3;
		}
		
		public void totalMarks(){
			total=m1+m2+m3;
			cout<<"Total marks: "<<total;
		}
		
		public void percentage(){
			percentage=(total/300)*100;
			cout<<"Percentage: "<<percentage;
		}
