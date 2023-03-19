// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "DZL_Log.h"

int main()
{
	//set log level
	DZL_Log::SetLevel(DZL_Log::LogLevel::Info);

	//now, these will not display
	DZL_Log::trace("this is a {} test.", "trace");
	DZL_Log::debug("this is a {} test.", "debug");

	//these will work
	DZL_Log::info("this is a {} test.", "info");
	DZL_Log::warn("this is a {} test.", "warn");
	DZL_Log::error("this is a {} test.", "error");


	//set pattern, default pattern is "{}"
	DZL_Log::SetPattern("[]");

	DZL_Log::info("this is a [] test.", "pattern");

	//write log file
	DZL_Log::trace_to_file("log.txt", "this is a {} test.", "file");
	DZL_Log::debug_to_file("log.txt", "this is a {} test.", "file");
	DZL_Log::info_to_file("log.txt", "this is a {} test.", "file");
	DZL_Log::warn_to_file("log.txt", "this is a {} test.", "file");
	DZL_Log::error_to_file("log.txt", "this is a {} test.", "file");

	system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件








