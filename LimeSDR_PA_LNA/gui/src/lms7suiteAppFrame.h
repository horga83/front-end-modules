#ifndef __LMS7SuiteAppFrame__
#define __LMS7SuiteAppFrame__

/**
@file
Subclass of AppFrame_view, which is generated by wxFormBuilder.
*/

#include "lms7suiteApp_gui.h"

//// end generated include
namespace lime{
class IConnection;
class ADF4002;
class Si5351C;
}
class pnlMiniLog;
class fftviewer_frFFTviewer;
class ADF4002_wxgui;
class Si5351C_wxgui;
class LMS_Programing_wxgui;
class RFSpark_wxgui;
class SonyPA_wxgui;
class FPGAcontrols_wxgui;
class Myriad7_wxgui;
class dlgDeviceInfo;
class SPI_wxgui;
class LMS7002M_Novena_wxgui;
class pnlBoardControls;
class pnlQSpark;

/** Implementing AppFrame */
class LMS7SuiteAppFrame : public AppFrame_view
{
	protected:
		// Handlers for AppFrame events.
		void OnClose( wxCloseEvent& event );
		void OnQuit( wxCommandEvent& event );
		void OnShowConnectionSettings( wxCommandEvent& event );

        void OnControlBoardConnect(wxCommandEvent& event);
        void OnDataBoardConnect(wxCommandEvent& event);
        void HandleLMSevent(wxCommandEvent& event);
        void OnDeviceInfoClose(wxCloseEvent& event);
        void OnShowDeviceInfo(wxCommandEvent& event);
        void OnSPIClose(wxCloseEvent& event);
        void OnShowSPI(wxCommandEvent& event);

    public:
		/** Constructor */
		LMS7SuiteAppFrame( wxWindow* parent );
	//// end generated class members
		virtual ~LMS7SuiteAppFrame();
	protected:
        void OnLogDataTransfer(bool Tx, const unsigned char* data, const unsigned int length);
        void OnLogMessage(wxCommandEvent &event);
		static const wxString cWindowTitle;
		static const int cDeviceInfoCollumn = 1;
		static const int cDeviceVerRevMaskCollumn = 2;
        void UpdateConnections(lime::IConnection* controlPort, lime::IConnection* samplingPort);

        lime::IConnection* lms7controlPort;
        lime::IConnection* streamBoardPort;
        pnlMiniLog* mMiniLog;

        SonyPA_wxgui* sonyPA;
        dlgDeviceInfo* deviceInfo;
        SPI_wxgui* spi;
};


#endif // __LMS7SuiteAppFrame__

