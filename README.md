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


# Project 1 - C++(Cpp) style create pattern
# 싱글톤 패턴이란?
  - 최초 한번만 메모리를 할당하고 인스턴스를 만들어 사용하는 패턴이다.
 
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
  
  
# 팩토리 메서드 패턴이란?
  - 객체 생성을 하위 클래스에서 처리하도록 한 디자인 패턴이다.
  
  장점
  1. 기존 코드의 수정없이 확장된 새로운 인스턴스 생성 가능
  2. 낮은 결합도 -> S/W 품질 상승
  3. 추상화, 다형성
  4. 코드 간결화
  
  단점
  1. 클래스가 많아지고, 계층도 커질 수 있다.
  2. 클라이언트가 반드시 생성자 클래스를 상속해 
  
  
# 추상 팩토리 패턴이란?
  - 서로 관련 있는 객체 클래스를 묶어 팩토리 클래스로 만들고 이를 인터페이스로 제공하는 패턴이다.
  - 싱글톤 패턴 + 팩토리 메서드 패턴
  
  장점
  1. 
  
  단점
  1. 
  
  
# Project 2 - C++(Cpp) style structural pattern
  
  
# Project 3 - C++(Cpp) style behavioral pattern
# 템플릿 메서드 패턴이란?
  - 상위 클래스에서 하위 클래스의 공통적인 동작을 정의하고, 하위 클래스에서는 더 확장된 기능을 구현하는 패턴이다.
  
  장점
  1. 코드 중복 축소, 재사용성 증가
  2. 중요한 로직을 캡슐화하고, 관리가 용이하다.
  3. 좀 더 객체 지향적이다.
  
  단점
  1. 상위 클래스 수정 시 하위 클래스도 수정해야 한다.
  2. 추상 메소드가 많아지면 클래스 관리가 복잡해진다.
  3. 클래스 간의 관계가 꼬일 수 있다.
