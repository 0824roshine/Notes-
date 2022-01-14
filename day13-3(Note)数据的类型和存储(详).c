//c语言的内置类型和构造类型。
//类型决定了开辟内存的大小。(如何看待内存空间的视角。)
// ___________________________________
void 内置类型()
{
	    //整形家族
		char A = '0';
		unsigned char A1 = '0';
		signed char A2 = '0';
		short B = 1;
		int B1 = 2;
		long B3 = 21474836477;
		//浮点型家族
		float C = 0.1;
		double C1 = 122.2;
}
void 构造类型()
{
		int bb[12] = { 0 };
		struct Stu
		{
			int a;
		};
		enum;
		union;
}
void 指针类型()
{
	int* pl;
	char* pc;
	float* pf;
	void* pv;
}
// 字节顺序 11223344大端存储，44332211小端存储

		