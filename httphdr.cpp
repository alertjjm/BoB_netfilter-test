#include "httphdr.h"
HttpHdr::HttpHdr(string packet){
    string delimeter1="\r\n";
    string delimeter2=":";
    size_t previous=0;
    size_t current=0;
    do{
        size_t colonpos=0;
        current++;
        previous=current;
        current=packet.find(delimeter1);
        if(current==string::npos)
            break;
        string temp=packet.substr(previous, current-previous);
        colonpos=temp.find(delimeter2);
        if(colonpos!=string::npos){
            comp.insert(make_pair(temp.substr(previous, colonpos-previous),temp.substr(colonpos+1, current-colonpos)));
        }
    }while(current!=string::npos);
}
string HttpHdr::getHost(){
    return comp.find("Host")->first;
}