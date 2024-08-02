# mysql 첫 수업
우왕 리눅스에서 mysql 설치하고 할려니깐 힘들엇당ㅎㅎ 윈도우 짱.. 감사합니다 MS 

---
[우분투에서 mysql 설치하기](URL, "https://apost.dev/sql-ubuntu-mysql-seolci-mic-hwangyeong-seoljeong/")

[mysql workbench 설치하기](URL, "https://ko.linux-console.net/?p=14987")

[mysql 완전 삭제하는 방법](URL, "https://2vup.com/ubuntu-remove-mysql/")

- - -
git에 올리는 법 
> 1. git init
> 2. (필요시) git confing --global user.email(or user.name) "(email/ name(git ID)"
> 3. (필요시2) git remote add origin "git 주소"
> 4. (필요시3) git branch -M main(마스터 ->메인으로 변경)
> 5. git add "파일"
> 6. git commit -m "설명"
> 7. git push origin main

끝 ~

- - -
mysql 계정, 테이블 생성

``` mysql  

create database (DB 이름);
create user (user ID)@localhost identified by (비번);
grant all privileges on (DB 이름). * to (user ID)@localhost;
commit;

```

- - - 
터미널 명령어 

> 1. sudo apt(or snap) install (설치하고 싶은 파일)
> 2. sudo rm rf (삭제하고 싶은 파일).*
> 3. sudo mysql -u (테이블)
>> 4. 터미널에서 mysql 접속

