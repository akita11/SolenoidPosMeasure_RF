#include <Arduino.h>

/*
// モデルのパラメータ (ここに生成されたパラメータを貼り付けます)
#define N_ESTIMATORS 100

// 以下に生成されたモデルのパラメータを挿入してください
const int pos_tree_0_nodes[] = {
    // ノードのパラメータ (生成された内容をここに貼り付けます)
};

float predict_pos(float *features) {
    float predictions[N_ESTIMATORS];
    for (int i = 0; i < N_ESTIMATORS; i++) {
        int node = 0;
        while (pos_tree_0_nodes[node][0] != -1) {
            if (features[pos_tree_0_nodes[node][3]] <= pos_tree_0_nodes[node][2]) {
                node = pos_tree_0_nodes[node][0];
            } else {
                node = pos_tree_0_nodes[node][1];
            }
        }
        predictions[i] = pos_tree_0_nodes[node][4];
    }
    float sum = 0.0;
    for (int i = 0; i < N_ESTIMATORS; i++) {
        sum += predictions[i];
    }
    return sum / N_ESTIMATORS;
}
*/
#include "esp32_pos_prediction.c"

// 以下、同様にtempモデルのパラメータとpredict_temp関数を追加します

void setup() {
    Serial.begin(115200);

    // テストデータ
    float features[3] = {1.0, 479.0, 1129.0};
    float pos_prediction = predict_pos(features);
    Serial.print("Predicted Pos: ");
    Serial.println(pos_prediction);

    // float temp_prediction = predict_temp(features);
    // Serial.print("Predicted Temp: ");
    // Serial.println(temp_prediction);
}

void loop() {
    // 繰り返し処理をここに記述
}
