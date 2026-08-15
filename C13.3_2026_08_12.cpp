#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>   // 提供 bool 类型（C99）
#include <stdio.h>
#include <stdlib.h>    // 提供 rand(), srand()
#include <time.h>      // 提供 time()

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char *rank_code[] = {"Two","Three","Four","Five","Six","Seven","Eight",
                              "Nine","Ten","Jack","Queen","King","Ace" };
    const char *suit_code[] = { "clubs","diamonds","hearts","spades"};

    // 初始化随机数生成器
    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:\n");
    
    // 发牌：随机抽取 num_cards 张不重复的牌
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;    // 随机花色 (0-3)
        rank = rand() % NUM_RANKS;    // 随机点数 (0-12)
        
        // 如果这张牌还没被抽到过
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;   // 标记为已抽到
            num_cards--;                   // 剩余牌数减1
            printf(" %s of %s\n", rank_code[rank], suit_code[suit]);
        }
        // 如果已经抽到过，重新随机
    }
    
    printf("\n");

    return 0;
}