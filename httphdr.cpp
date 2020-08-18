#include "httphdr.h"
#include <iostream>
HttpHdr::HttpHdr(string packet, int hlen){
    string delimeter1="\r\n";
    string delimeter2=":";
    size_t previous=0;
    size_t current=-2;
    host="";
    int idx=0;
    do{//save only host
        size_t colonpos=0;
        current+=2; //skip \r\n
        previous=current;
        current=packet.find(delimeter1,current);
        if(current>=hlen)
            break;
        string temp=packet.substr(previous, current-previous);
        colonpos=temp.find(delimeter2);
        if(colonpos<temp.length()){
            string mkey=temp.substr(0, colonpos);
            string mvalue=temp.substr(colonpos+2, temp.length()-colonpos);
            if (mkey=="Host")
                host=mvalue;
        }
        idx++;
    }while(current<packet.length()&&idx<=1);
}
string HttpHdr::getHost(){
    return host;
}