
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;


int main( )
{
	//����ԭʼͼ   
	Mat image = imread("../41_DilationEX.jpg");  //����Ŀ¼��Ӧ����һ����Ϊ1.jpg���ز�ͼ
	//��������   
	namedWindow("��ԭʼͼ����ñ����");  
	namedWindow("��Ч��ͼ����ñ����");  
	//��ʾԭʼͼ  
	imshow("��ԭʼͼ����ñ����", image);  
	//�����
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));  
	//������̬ѧ����
	morphologyEx(image, image, MORPH_BLACKHAT, element);
	//��ʾЧ��ͼ  
	imshow("��Ч��ͼ����ñ����", image);  

	waitKey(0);  

	return 0;  
}
