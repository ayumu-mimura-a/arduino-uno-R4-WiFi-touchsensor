# touchsensor Arduino-UNO-R4-WiFi

- **自己容量型タッチセンサの仕組み**
  - 銅箔と抵抗を直列にはんだ付けして、Arduino UNO R4 WIFI の PIN 番号 7, 8 に接続して RC 回路を作成
  - PIN7 で出力、PIN8 で電圧を読み取り、充電が完了すると PIN7 と PIN8 の電圧が同じになるため、完了するまでの時間をカウント
  - 銅箔に手を近づけると静電容量が増え、充電時間が増加

 


<img width="3024" height="4032" alt="IMG_7013" src="https://github.com/user-attachments/assets/31d15572-eff7-4873-9dd0-59100a122a6d" />

