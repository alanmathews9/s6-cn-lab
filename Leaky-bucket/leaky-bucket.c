#include<stdio.h>

void main()
{
    int in, out, bsize, n bucket = 0;
    printf("Enter the bucket size: ");
    scanf("%d", &bsize);
    printf("Enter no. of inputs: ")
    scanf("%d", &n);
    printf("Enter the output rate: ");
    scanf("%d", &out);

    while (n!=0)
    {
        printf("enter incoming packet size: ");
        scanf("%d", &in);
        if (in <= (bsize-bucket))
        {
            bucket += in
            printf("Bucket status: %d out of %d\n", bucket, bsize);
        }
        else
        {
            printf("Dropped packets: %d\n", in - (bsize - bucket));
            printf("Bucket status: %d out of %d\n", bucket, bsize)
            bucket = bsize;          //shouldnt this be before the printf?
        }
        bucket -= out;
        printf("Bucket status after outgoing: %d out of %d\n", bucket, bsize);
        n--;
    }
}