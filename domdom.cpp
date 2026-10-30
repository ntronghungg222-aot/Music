#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

// Thiết lập giá trị mặc định
const int maxLoi = 10;
const int maxSpeed = 10;
// Lời bài hát
string loiBai_hat[maxLoi] = {"Gió ơi xin đừng lấy em đi",
                             "Hãy mang em về chốn xuân thì",
                             "Ngày nào còn bồi hồi tóc xanh",
                             "Ngày nào còn trò chuyện với anh",
                             "Em nói em thương anh mà",
                             "Nói em yêu em mà",
                             "Cớ sao ta lại hóa chia xa",
                             "Đóa phong lan lặng lẽ mơ màng",
                             "Nàng dịu dàng tựa đèn phố Vinh",
                             "Đẹp rạng ngời chẳng còn cố Xinh...",};
// Tốc độ giữa các câu
double speed[maxSpeed] = {1, 1.5, 0.5, 0.15, 0.25, 0.25, 0.75, 0.5, 0.25, 2};
// Tốc độ Delay hiệu ứng gõ máy mặc định tự thiết lập
const int delayms = 88.5;
// Hàm hiệu ứng đánh máy
void printWithTypewriter(const std::string& text, int delay_ms = 50) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
}
// Hàm in Lyrics
void printLyrics()
{
    printWithTypewriter(loiBai_hat[maxLoi - 10], delayms + 5); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 10]));
    printWithTypewriter(loiBai_hat[maxLoi - 9], delayms); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 9]));
    printWithTypewriter(loiBai_hat[maxLoi - 8], delayms - 50); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 8]));
    printWithTypewriter(loiBai_hat[maxLoi - 7], delayms - 50); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 7]));
    printWithTypewriter(loiBai_hat[maxLoi - 6], delayms - 20); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 6]));
    printWithTypewriter(loiBai_hat[maxLoi - 5], delayms - 20.5); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 5]));
    printWithTypewriter(loiBai_hat[maxLoi - 4], delayms); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 4]));
    printWithTypewriter(loiBai_hat[maxLoi - 3], delayms); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 3]));
    printWithTypewriter(loiBai_hat[maxLoi - 2], delayms - 25); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 2]));
    printWithTypewriter(loiBai_hat[maxLoi - 1], delayms - 35); cout << endl; this_thread::sleep_for(chrono::duration<double>(speed[maxSpeed - 1]));
}
// Hàm main
int main()
{
    // Thiết lập in Tiếng Việt
    system("chcp 65001");
    setlocale(LC_ALL, "vi_VN.UTF-8");
    // Gọi hàm in Lyrics
    printLyrics();
    // Báo chương trình chạy suôn sẻ
    return 0;
}
