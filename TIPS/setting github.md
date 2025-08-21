그냥 말랑두부가 깃허브 설정하면서 알게된 것 정리

### 기본적인 push방법
0. 상황
- 로컬에 깃허브와 연결된 폴더 abc가 있다. 
- abc에 코드를 올리고, 이를 깃허브에 push하는 방법

1. git checkout main #main으로 이동
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


### 내가 사용하던 폴더와, 공용 레포지토리 연결
0. 상황
- 로컬 & 깃허브 개인 레포 abc가 있다. (abc에서 git remote -v를 했을 때 origin으로 연결해 둔 깃허브 주소가 뜸.)
- 코드를 abc에 올리고 push하면 개인 레포 abc, 공용 레포 ABC에 모두 push

1. 



