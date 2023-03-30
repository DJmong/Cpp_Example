뭔가...

개발하면서 느끼는게....

반복적으로 작업하는 일이 너무 많다는 생각이 든다.

이거 만들어두면

야근할 시간이 줄어들려나...?


1) parseLine.cpp

  - 입력
     - std::string source
     - std::string delimiter
  - 출력
     - std::vector<std::string>
  - 사용법
     - 코드 내 main 함수 참조
  - 설명
     - source를 입력 받아 delimiter 단위로 문장을 쪼개주는 만능 파서
  > 리턴 값을 size로 받을까 생각해봤는데, 어차피 std::vector는 size를 제공하니까 필요 없겠더라
     이거 외워두고 코딩 테스트에서 써먹으면 꽤나 좋더라
