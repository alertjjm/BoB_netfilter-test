#pragma once
#include <cstdint>
#include <string>
#include <map>
using namespace std;

#pragma pack(push, 1)
struct HttpHdr final {
	map<string,string> comp;
    HttpHdr(string packet, int hlen);
    string getHost();
    int httplen;
    string host;
};
#pragma pack(pop)
