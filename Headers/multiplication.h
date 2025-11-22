#include<stdio.h>
int fact(int n){
	int i,f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return (f);
}
int power(int x,int n){
	int i,p=1;
	for(i=1;i<=n;i++){
		p=p*x;
	}
	return (p);
}
float expn(float x,int n){
	int i,f;float s=1;
	for(i=1;i<=n;i++){
		f=fact(i);
		s=s+power(x,i)/f;
	}
	return s;
}
float sinhx(float x,int n){
	int i,f;
	float s=0;
	for(i=1;i<=n;i+=2){
		f=fact(i);
		s=s+power(x,i)/f;
	}
	return s;
}
float coshx(float x,int n){
	int i,f;
	float s=1;
	for(i=2;i<=n;i+=2){
		f=fact(i);
		s=s+power(x,i)/f;
	}
	return s;
}
float sinx(float x,int n){
	int i,f,t=2;
	float s=0;
	for(i=1;i<=n;i+=2){
		f=fact(i);
		s=s+power(-1,t)*power(x,i)/f;
		t++;
	}
	return s;
}
float cosx(float x ,int n){
	int i,f,t=1;
	float s=1;
	for(i=2;i<=n;i+=2){
		f=fact(i);
		s=s+power(-1,t)*power(x,i)/f;
		t++;
	}
	return s;
}