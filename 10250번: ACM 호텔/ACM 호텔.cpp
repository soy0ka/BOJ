/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10250                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: yurihana <boj.kr/u/yurihana>                +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10250                          #+#        #+#      #+#    */
/*   Solved: 2025/04/11 01:14:11 by yurihana      ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
using namespace std;

// struct Room {
//   int number;
//   bool isOccupied;
// };

// void initRoom(Room &room, int number) {
//   room.number = number;
//   room.isOccupied = false;
// }

// void checkIn (Room &room) {
//   room.isOccupied = true;
// }

// void initHotel(vector<vector<Room>> &hotel, int width, int height) {
//   hotel.resize(height);
//   for (int i = 0; i < height; i++) {
//     hotel[i].resize(width);
//     for (int j = 0; j < width; j++) {
//       int floor = i + 1;
//       // i = level
//       // j = room number
//       initRoom(hotel[i][j], floor * 100 + j + 1);
      
//     }
//   }
// }

// int simulate (vector<vector<Room>> &hotel, int arrival) {
//   for (int i=0;i<arrival;i++) {
  
//   }
// }

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;

  // vector<vector<Room>> hotel;
  cin >> t;
  while(t--) {
    int width, height, arrival;
    cin >> height >> width >> arrival;

    int floor = (arrival % height == 0) ? height : arrival % height;
    int roomNumber = (arrival - 1) / height + 1;


    cout << floor * 100 + roomNumber << '\n';
  }
}
