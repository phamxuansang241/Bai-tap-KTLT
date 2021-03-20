#include<bits/stdc++.h>

extern "C" {
    #define STB_IMAGE_IMPLEMENTATION
    #include "stb_image.h"
}

using namespace std;

int x, y, n;
string brightness = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,. ";
//" .,-~:;=!%iuYEN@";
int degree = brightness.length();
struct dot {
    unsigned char red, green, blue;
};

dot get_rgb_val(unsigned char* data, int cur_x, int cur_y, int w) {
    dot pix;
    pix.red = data[3 * (cur_y * w + cur_x)];
	pix.green = data[3 * (cur_y * w + cur_x) + 1];
	pix.blue = data[3 * (cur_y * w + cur_x) + 2];

    return pix;
}

void dither(unsigned char* data, int w, int h) {
    cout << w << ' ' << h << endl;
    for(int i = 0;i < h;i++) {
        for(int j = 0;j < w;j++) {
            dot cur_pix = get_rgb_val(data, j, i, w);

            unsigned char avg = 0.21*cur_pix.red+0.72*cur_pix.green+0.07*cur_pix.blue;
            float weight = (int(avg)*degree)/255;
            cout << brightness[int(round(weight))] << brightness[int(round(weight))];
        }
        cout << endl;
    }
}

int main() {
    freopen("ex1.out", "w", stdout);
    string filename = "newdo.jpg";

    unsigned char* image = stbi_load(filename.c_str(), &x, &y, &n, 3);

    if (image != nullptr && x > 0 && y > 0)
        cout << "Image loaded." << endl;
    dither(image, x, y);
    return 0;
}

// 1 ô pixel (red, green, blue) -> tham số x: độ sáng, độ rõ nét





