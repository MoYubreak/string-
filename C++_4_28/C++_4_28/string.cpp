#include<iostream>
#include<string>
using namespace std;



void teststr1()
{
	//// string(); 
	//string str1;
	////string(const char* s);
	//string str2("1234567");
	////string(const char* s);  string(const string& str);
	//string str3 = "1299";  
	//// string(const char* s); -> “hello world" 隐式转化为string 类，  string(const string& str , size_t pos , size_t len = npos);
	//string str4("hello world", 3, 2);
	////string(const char* s , size_t n );
	//string str5("hello world", 2);
	////string(size_t n , char c);
	//string str6(6, 'i');
	//string str1;
	//string str2("hello world");
	//string str3("hello world", 2, 4);
	//string str4(str2, 2, 4);
	//string str5(6, 'c');
	//string str6("hello world", 5);
	//string str7(str3);
	//cout << str2 << endl << str3 << endl << str4 << endl << str5 << endl << str6 << endl;
}


void teststr2()
{
	//string str = "hello world";

	//cout << endl << "for(int i = 0 ; i < str.size() ; i++)" << endl;
	//for (int i = 0; i < str.size(); i++)
	//{
	//	cout << str[i];
	//}
	//cout << endl << "for(auto c : str)" << endl;
	//for (auto c : str)
	//{
	//	cout << c;
	//}
	//cout << endl << "string :: interator s1 = str.begin(); " << endl;
	//string::iterator s1 = str.begin();
	//while (s1 < str.end())
	//{
	//	cout << *s1;
	//	++s1;
	//}

	//cout << endl << "string::reverse_iterator s2 = str.rbegin();" << endl;
	//string::reverse_iterator s2 = str.rbegin();
	//while (s2 < str.rend())
	//{
	//	cout << *s2;
	//	++s2;
	//}


	//cout << endl << "const string str2 = \"hello world\" " << endl;
	//const string str2 = "hello world";
	//cout << endl << "string::const_iterator s3 = str.begin()" << endl;
	//string::const_iterator s3 = str2.begin();
	//while (s3 < str2.end())
	//{
	//	cout << *s3;
	//	++s3;
	//}
	//cout << endl << "string::const_reverse_iterator s4 = str2.crbegin()" << endl;
	//string::const_reverse_iterator s4 = str2.crbegin();
	//while (s4 < str2.crend())
	//{
	//	cout << *s4;
	//	++s4;
	//}
}

void teststr3()
{
	//string str("hello world");

	////push_back(char c);
	//str.push_back('1');

	//string str1 = str;
	////append(const char* s);
	//str1.append(" hello");

	//str1.clear();
	////append(const string& str);
	//str1.append(str);
	//
	//str1.clear();

	////append(const string& str , size_t subpos , size_t sublen = npos);
	//str1.append(str, 0, str.size() - 1);

	//str1.clear();

	////append(const char* s , size_t n);
	//str1.append("hello world", 5);

	//str1.clear();

	////operator+=
	//str1 += "hello world";
	//str1 += str;
	//
	//str1.clear();
	//cout << str1 <<endl;
}


void teststr4()
{
	//string str = "hello world hhh";

	//string str1(str);

	////erase(size_t pos = 0 , size_t len = npos);

	//str1.erase();
	//cout << str1 << endl;
	//str1 = str;
	//str1.erase(5);
	//cout << str1 << endl;
	//str1 = str;
	//str1.erase(5, 5);
	//cout << str1 << endl;

	////erase(iterator p);  删除p指向的 字符
	//str1 = str;
	//string::iterator p = str1.begin();
	//++p;
	//++p;
	//str1.erase(p);
	//cout << str1 << endl;
	//
	////erase(iterator first , iterator last); 
	//str1 = str;
	//string::iterator l = str1.begin();
	//++l;
	//str1.erase(l, str1.end());
	//cout << str1 << endl;
}


void teststr5()
{
	//string str = "hello world";
	//string str1 = str;

	////assign(const char* s);
	//str1.assign("123");
	//cout << str1 << endl;

	////assign(cont char* s , szie_t n);
	//str1 = str;
	//str1.assign("123456", 4);
	//cout << str1 << endl;

	////assign(const string& str);
	//str1.assign(str);
	//cout << str1 << endl;

	////assign(const string& str , size_t pos , size_t len);
	//str1.assign(str, 2, 3);
	//cout << str1 << endl;

	////assign(size_t n , char c);
	//str1 = str;
	//str1.assign(6, 'c');
	//cout << str1 << endl;
}


void teststr6()
{
	//string str = "hello world";
	//string str1 = str;

	////insert(size_t pos , const char* s);   在pos前插入 字符串 s
	//str1.insert(0, "123");
	//cout << str1 << endl;

	////insert(size_t pos , const char* s , size_t n);  在pos前插入 字符串s的前n个字符
	//str1 = str;
	//str1.insert(0, "1234578", 3);
	//cout << str1 << endl;

	////insert(size_t pos , const string& str);
	//str1 = str;
	//str1.insert(0, str);
	//cout << str1 << endl;
	////insert(size_t pos , const string& str , size_t subpos , size_t sublen);
	//str1 = str;
	//str1.insert(0, str, 2, 3);
	//cout << str1 << endl;

	////insert(size_t pos , size_t n , char c);
	//str1 = str;
	//str1.insert(0, 6, 'c');
	//cout << str1 << endl;

	////insert(iterator p , size_t n , char c);
	//str1 = str;
	//str1.insert(str1.begin(), 6, 'a');
	//cout << str1 << endl;

	////insert(iterator p , char c);
	//str1 = str;
	//str1.insert(str1.begin(), 'a');
	//cout << str1 << endl;
}


void teststr7()
{
	//string str("hello world");
	//string str1 = str;
	////repalce 替换

	////replace(size_t pos , size_t len , const char* s);  
	//str1.replace(0, 3, "12345");
	//cout << str1 << endl;

	////replace(iterator i1 , iterator i2 , const char* s);
	//str1 = str;
	//str1.replace(str1.begin(), str1.end() - 6, "12345");
	//cout << str1 << endl;

	////replace(size_t pos , size_t len , const char* s , size_t n);
	//str1 = str;
	//str1.replace(0, 3, "12345", 3);
	//cout << str1 << endl;

	////replace(iterator i1 , iterator i2 , const char* s , size_t n);
	//str1 = str;
	//str1.replace(str1.begin() + 1, str1.end() - 1, "12345", 3);
	//cout << str1 << endl;

	////repalce(size_t pos , size_t len , const string& str);
	//str1 = str;
	//str1.replace(1, 2, str);
	//cout << str1 << endl;

	////repalce(iterator i1 , iterator i2 , const string& str);
	//str1 = str;
	//str1.replace(str1.begin() + 1, str1.end() - 1, str);
	//cout << str1 << endl;

	////repalce(size_t pos , size_t len , const string& str , size_t subpos , size_t sublen);
	//str1 = str;
	//str1.replace(1,3, str, 2, 3);
	//cout << str1 << endl;

	////repalce(size_t pos , size_t len , size_t n , char c);
	//str1 = str;
	//str1.replace(0, 3, 2, 'c');
	//cout << str1 << endl;
	//
	////repalce(iterator i1 , iterator i2 , size_t n , char c);
	//str1 = str;
	//str1.replace(str1.begin() + 1, str1.end() - 1, 4, 'a');
	//cout << str1 << endl;

}


void teststr8()
{
	//string str = "hello world";
	//string str1 = "hello world";
	//cout << "size" << str1.size() << endl;
	//cout << "length" << str1.length() << endl;

	//cout << "判空" << str1.empty() << endl;

	//str1.resize(100);
	//cout << "设置size大小100: " << str1.size() << endl;

	//str1.reserve(500);
	//cout << "设置capacity为50: " << str1.capacity() << endl;

	//cout << "能设置的最大capacity: " << str1.max_size() << endl;

	////string& at(size_t pos);   const string& at(size_t pos) const;  越界访问会抛异常
	//for (int i = 0; i < str1.size(); i++)
	//{
	//	cout << str1.at(i);
	//}
	//cout << endl;

	//string str2 = "123";
	//try
	//{
	//	str2.at(5);
	//}
	//catch (exception e)
	//{
	//	cout << 1111 << endl;
	//}

	////clear
	//str1.clear();
	//cout << "清空str1: " << str1 << endl;

	////const char* c_str() const;   const  char*  data() const;  两个意思相同
	//str1 = str;
	//printf("%s\n", str1.c_str());

	//printf("%s\n", str1.data());


}


void teststr9()
{
	string str = "hello world";
	string str1 = str;

	//string substr(size_t pos = 0 , size_t len = npos) const;  返回一个子串
	cout << str1.substr() << endl;
	cout << str1.substr(1, 4) << endl;

	//find 从pos处向后搜索

	// size_t find(const char* s , size_t pos = 0) const; 在pos以及pos后查找串s，如果找到则返回要查找的串的第一个字符 在被找串的中的 位置 ， 没找到则返回std::npos 
	cout << str1.find("lo") << endl;
	cout << str1.find("lo", 0) << endl;
	cout << str1.find("aaa", 0) << endl;

	//size_t find(const char* s , size_t pos , size_t n) const;
	cout << str1.find("lo", 0, 2) << endl;
	cout << str1.find("lowqqwe", 0, 2) << endl;

	//size_t find(const string& str , size_t pos = 0 ) const;
	cout << str1.find(str) << endl;
	cout << str1.find(str, 1) << endl;
	cout << str1.find(str, 0) << endl;

	//size_t find(char c , size_t pos = 0);
	cout << str1.find('o') << endl;
	cout << str1.find('l', 3) << endl;

	cout << "-------------------------------" << endl;
	//rfind 从pos处向前搜索

	//size_t rfind(const char* s , size_t pos = npos);
	cout << str1.rfind("lo");
	cout << str1.rfind("he", 1) << endl;

	//size_t rfind(const char* s , size_t pos , size_t n);
	cout << str1.rfind("hedawdawd", 1, 2) << endl;

	//size_t rfind(const string& str , size_t pos = npos);
	cout << str1.rfind(str) << endl;
	cout << str1.rfind(str, 3) << endl;

	//size_t rfind(char c , size_t pos = npos);
	cout << str1.rfind('l') << endl;
	cout << str1.rfind('l', 5) << endl;


}

int main()
{
	//teststr1();
	//teststr2();
	//teststr3();
	//teststr4();
	//teststr5();
	//teststr6();
	//teststr7();
	//teststr8();
	teststr9();
}