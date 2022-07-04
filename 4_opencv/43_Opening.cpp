#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main( )
{
	//����ԭʼͼ   
	Mat image = imread("../41_DilationEX.jpg");  //����Ŀ¼��Ӧ����һ����Ϊ1.jpg���ز�ͼ
	//��������   
	namedWindow("��ԭʼͼ��������");  
	namedWindow("��Ч��ͼ��������");  
	//��ʾԭʼͼ  
	imshow("��ԭʼͼ��������", image);  
	//�����
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));  
	//������̬ѧ����
	morphologyEx(image, image, MORPH_OPEN, element);
	//��ʾЧ��ͼ  
	imshow("��Ч��ͼ��������", image);  

	waitKey(0);  

	return 0;  
}
