//		������������morphologyEx����ͼ��ʴ
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
int main( )
{
	//����ԭʼͼ   
	Mat image = imread("../41_DilationEX.jpg");  //����Ŀ¼��Ӧ����һ����Ϊ1.jpg���ز�ͼ
	//��������   
	namedWindow("��ԭʼͼ����ʴ");  
	namedWindow("��Ч��ͼ����ʴ");  
	//��ʾԭʼͼ  
	imshow("��ԭʼͼ����ʴ", image);  
	//�����
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));  
	//������̬ѧ����
	morphologyEx(image, image, MORPH_ERODE, element);
	//��ʾЧ��ͼ  
	imshow("��Ч��ͼ����ʴ", image);  

	waitKey(0);  

	return 0;  
}
