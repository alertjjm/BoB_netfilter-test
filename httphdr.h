#pragma once
#include <cstdint>
#include <string>
using namespace std;

#pragma pack(push, 1)
struct HttpHdr final {
    HttpHdr(string packet, int hlen);
    string getHost();
    int httplen;
    string host;
};
#pragma pack(pop)
