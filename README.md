# vscode Debug 設定

1. 下載 MinGW 並依預設值安裝在 C:\MinGW 內  
MinGW 是 C/C++ 的編譯器。  
下載網址: https://sourceforge.net/projects/mingw/


![](images/2020-09-17-16-41-02.png)

Mark for Install:選擇 mingw32-gcc-g++
![](images/2020-09-17-16-41-38.png)

Apply Changes
![](images/2020-09-17-16-42-38.png)

設定環境變數
![](images/2020-09-17-16-15-08.png)


![](images/2020-09-17-16-15-25.png)

![](images/2020-09-17-16-15-36.png)

增加一筆紀錄 C:\MinGW\bin  
![](images/2020-09-17-16-15-45.png)

2. 安裝 VSCode  
![](images/2020-09-17-17-14-37.png)

3. 下載 CPP 專案設定檔
   https://github.com/jiangsir/VScode_Debug

![](images/2020-09-18-10-08-07.png)

解開後，直接讓 VScode 開啟資料夾即可開始進行開發。  

![](images/2020-09-18-10-11-19.png)

檔案結構如下:  
![](images/2020-09-18-10-12-23.png)

點開 hello.cpp 就可以開始進行開發與 Debug

4. 進行 Debug  
	
![](images/2020-09-18-07-58-24.png)

選擇除錯的項目之後就可以直接用 F5 進行除錯。  

用滑鼠在行號左邊點一下就可以設定好中斷點  
![](images/2020-09-18-09-02-36.png)

彈出一個 "命令提示字元" 可以提供鍵盤輸入  
![](images/2020-09-18-09-04-44.png)

可以按 F10 開始一步一步執行  
或者 F11 進入函數  
或者 F5 執行到下個中斷點  
![](images/2020-09-18-09-07-00.png)

在左邊就可以觀察變數的變化情形了。
![](images/2020-09-18-09-10-47.png)
