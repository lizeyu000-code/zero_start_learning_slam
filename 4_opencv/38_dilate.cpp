//		����������ͼ������dilate�����÷�ʾ��
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main(   )
{

	//����ԭͼ  
	Mat image = imread("../38_dilate.jpg");

	//��������  
	namedWindow("��ԭͼ�����Ͳ���");
	namedWindow("��Ч��ͼ�����Ͳ���");

	//��ʾԭͼ
	imshow("��ԭͼ�����Ͳ���", image);

	//�������Ͳ��� 
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat out;
	dilate(image, out, element);

	//��ʾЧ��ͼ 
	imshow("��Ч��ͼ�����Ͳ���", out);

	waitKey(0); 

	return 0;
}