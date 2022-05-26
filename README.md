# Writer : JCS
# Date : 2022-05-25
# Description
  * This project was made for my c/c++ practice.
  * Additional explanations are made here.
  * The project is not updated on completion to some extent.
  * If you are working on an additional project, it may not be updated.
  * It's open source, so you can use it anytime, anywhere.
  * It's written for practice, so some problems may arise.
  * The comment is not modified if the information of the content is not accurate even if it is read.
  * Koreans write comments in Korean. If it is written in English, it may not be read it.
  * Comments in the source are written in Korean, so if necessary, they should be translated directly.


# Project 1 - C style design pattern
  싱글톤 패턴이란?
  최초 한번만 메모리를 할당하고 인스턴스를 만들어 사용하는 디자인 패턴이다.
 
  장점
  1. 멀티 쓰레드에 안전
  2. 유일성 보장
  3. 객체 로딩 성능 향상
  4. 메모리 낭비 방지

  단점
  1. 수행하는 것이 많거나 많은 데이터 공유 시 결합도 상승 -> S/W 품질 하락
  2. 객체 지향 설계 원칙에 거스름
  3. 수정에 어려움
  4. 유지보수의 비용이 높아짐
  5. 멀티 쓰레드 환경에서 동기화 처리하지 않으면 인스턴스가 2개 생성될 수 있음
