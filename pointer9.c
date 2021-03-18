
int sayilar[10]={1,2,3,4,5,6,7,8,9,10};
	 int *ptr=sayilar+3;     //ptr sayilarin 0.indexinin adresini alir yani sayilar degiskeni dizinin 0.indexindeki elemandir. sayilar=1
	 printf("%d\n",*ptr);    //cikti : 1+3=4
	 
	 printf("%d\n",*(ptr+0));    //ptr degeri bir onceki adimda 4 olarak verildi.Yani bu dizinin 0.indexi artik 4 elemanidir.
	 printf("%d\n",*(ptr-1));    // bu kod ise bize 3 degerini verir. 0.index 4 oldugu icin bir gerisi 3 degeridir.
	 printf("%d\n",*(ptr-2));	 
	 
	//Kisa bir not!
	char ch='A';
	(&ch)[0]='B';    //[] isleci islec oncelik tablosunun en yuksek duzeyinde bulunur.
	putchar(ch);
