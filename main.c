#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};
int main()
{
    int index = 0;
    struct point arr[100];
    printf("huanyingjinruzhuanzheguanlixitong\n");
    while (1)
    {
        printf("1--tianjiacheliangweizhi\n");
        printf("2--shanchuzuihoucheliangweizhi\n");
        printf("3--xianshiquanbucheliangweizhi\n");
        printf("4--tianjiacheliangweizhi\n");

        printf("5--tuichuxitong\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshurucheliangweizhidexdezuobniaoheyxuobiao\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("tianjiawanxcheng,dianjihuichejixu\n");
            char zz;
            scanf("%c", &zz);
            scanf("%c", &zz);
        }
        if (code == 2)
        {
            printf("shanchucheliangweizhide-x-zuobiaohex-zuobiao\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index--;
            printf("shanchuchenggong,dianjihuichejixu\n");
            char zz;
            scanf("%c", &zz);
            scanf("%c", &zz);
        }
        if (code == 3)
        {
            printf("suoyoucheliangweizhiruxia:\n");
            for (int i = 0; i < index; i++)
            {
                printf("di%dgechengliangdeweizhiwei(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("dianjihuichejixu\n");
            char zz;
            scanf("%c", &zz);
            scanf("%c", &zz);
        }
        if (code == 4)
        {
            printf("qingshurudangqianweizhizuobiao:\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            double min = 100000;
            int carID = 0;
            for (int i = 0; i < index; i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx * dx + dy * dy);
                if (min > 1)
                {
                    min = 1;
                    carID = i;
                }
            }
            printf("yonghudangqianweizhiyudi%ddechedejiliwei%lf,shizuoxiaojuli\n", carID + 1, min);
            printf("dianjijhuichejixu\n");
            char zz;
            scanf("%c", &zz);
            scanf("%c", &zz);
        }
        if (code == 5)
        {
            printf("yinyongyijingtuichu\n");
            break;
        }
    }

    return 0;
}