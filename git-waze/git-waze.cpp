// git-waze.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "base.hpp"
#include <vector>
#include <algorithm>
#include <filesystem>
#include "idxfile.hpp"
#include "packfile.hpp"

/// We known, only VC20 support std::filesystem
#if _MSC_VER<2000
namespace std {
	namespace filesystem = std::experimental::filesystem;
}
#endif

//bool packresolve(const wchar_t *file) {
//	base::Wfs wfs;
//	pack::PackAnalyzer pa(wfs);
//	if (!pa.resolve(file)) {
//		return false;
//	}
//	return true;
//}

int wmain(int argc, wchar_t **argv)
{

	return 0;
}

