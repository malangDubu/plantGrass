그냥 말랑두부가 깃허브 설정하면서 알게된 것 정리

### 기본적인 push방법
0. 상황
- 로컬에 깃허브와 연결된 폴더 abc가 있다. 
- abc에 코드를 올리고, 이를 깃허브에 push하는 방법

1. git checkout main #main으로 이동 (git branch를 통해 이름 확인 필요. master일수 있음.)
2. git pull origin main #원격과 동기화
3. git checkout myBranch #myBranch라는 브랜치로 이동
4. git add . #모든 변경 추가
5. git commit -m "This is my commit." #commit message 작성
6. git push origin myBranch #myBranch의 내용을 push

web github에서,
7. Compare & pull request 버튼 클릭하고, create pull request
8. approve되면 merge됨.

### 기본적인 approve 방법
web github에서,
1. Files changed 탭에서 변경사항 확인
2. Review changes 버튼 -> approve(승인)


### github에 연결할 로컬폴더 만들기
1. mkdir ProblemSolving
2. cd ProblemSolving
3. git clone git@github.com:malangDubu/plantGrass.git #ProblemSolving폴더 안에 plantGrass가 생김
4. cd plantGrass




