/*************************************************************************
    > File Name: studentc.h
    > Author: chenyingchun
    > Mail:  yingchun.chen1@pactera.com 
    > Created Time: 2017年05月15日 星期一 16时21分28秒
 ************************************************************************/
#ifndef _STUDENTC_H_
#define _STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>

class Student
{
	private:
		typedef valarray<double> ArrayDb;
		std::string name;
		ArrayDb scrores;
		std::ostream & arr_out(std::ostream &os) const;
	public:
		Student() : name("Null student"), scores(){}
		explicit Student(const std::string &s) : name(s), scores() {}
		explicit Student(int n) : name("NUlly"), scores(n){}
		Student(const std::string &s, int n) : name(s), scores(n){}
		Student(const const char *str, const double *pd, int n)
			: name(str), scores(pd, n){}

		~Student(){}
		double Average() const
		{
			if(this.size() > 0)
			{
				return (this.sum() / this.size());
			}
			else
			{
				return 0;
			}
		}

		const std::string getName() const
		{
			return name;
		}
	
		double & operator[](const int n);
		double operator[](const int n) const; 


		friend std::istream & operator>>(std::istream &is, Student &stu);
		friend std::istream & getline(std::istream &is, Student &stu);
		friend std::ostream & operator<<(std::ostream &os, const Student &stu);
};

#endif
