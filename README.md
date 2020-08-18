# netfilter-test

## Usage
```bash
 sudo iptables -F
 sudo iptables -A INPUT -j NFQUEUE --queue-num 0
 sudo iptables -A OUTPUT -j NFQUEUE --queue-num 0
 
 sudo ./netfilter-test <filtering host1> <filtering host2> ... 
 ex) sudo ./netfilter-test www.gilgil.net www.4shared.com www.warning.or.kr
```
--- 
## www.gilgil.net www.4shared.com www.warning.or.kr 차단 명령어 및 결과
![image](https://user-images.githubusercontent.com/46064193/90481510-dc7b3100-e16c-11ea-991f-36718b40736b.png)
---
## 차단 사이트는 접속불가
![image](https://user-images.githubusercontent.com/46064193/90481438-b9508180-e16c-11ea-8276-2586f4c56665.png)
---
## 미차단 사이트는 접속 가능
![image](https://user-images.githubusercontent.com/46064193/90481496-d38a5f80-e16c-11ea-85c4-2ff1c31793d5.png)
