#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>  
using namespace cv;  



//-----------------------------------��main( )������--------------------------------------------  
//      ����������̨Ӧ�ó������ں��������ǵĳ�������￪ʼ  
//----------------------------------------------------------------------------------------------- 
int main( )
{    
	Mat src = imread("../49_floodFill.jpg");
	imshow("��ԭʼͼ��",src);
	Rect ccomp;
	floodFill(src, Point(50,300), Scalar(155, 255,55), &ccomp, Scalar(20, 20, 20),Scalar(20, 20, 20));
	imshow("��Ч��ͼ��",src);
	waitKey(0);
	return 0;    
}  