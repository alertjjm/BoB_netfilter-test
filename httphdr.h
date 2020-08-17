#pragma once
#include <cstdint>
#include <string>
#include <map>
using namespace std;

#pragma pack(push, 1)
struct HttpHdr final {
	map<string,string> comp;
    HttpHdr(string packet);
    string getHost();
};
#pragma pack(pop)
