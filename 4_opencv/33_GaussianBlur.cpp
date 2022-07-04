
// GaussianBlur

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/imgproc/imgproc.hpp" 
using namespace cv; 

int main( )
{ 
	// ����ԭͼ
	Mat image=imread("../33_GaussianBlur.jpg");
	//��������
	namedWindow( "image" );
	namedWindow( "out");

	//��ʾԭͼ
	imshow( "image", image );

	//���и�˹�˲�����
	Mat out; 
	GaussianBlur( image, out, Size( 5, 5 ), 0, 0 ); 

	//��ʾЧ��ͼ
	imshow( "out" ,out );

	waitKey( 0 );     
} 