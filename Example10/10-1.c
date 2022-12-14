/*
** 表示长途电话付账记录的结构
*/

struct PHONE_NUMBER {
  short area;
  short exchange;
  short station;
};

struct LONG_DISTANCE_BILL {
  short month;
  short day;
  short year;
  int time;
  struct PHONE_NUMBER called;
  struct PHONE_NUMBER calling;
  struct PHONE_NUMBER billed;
};

