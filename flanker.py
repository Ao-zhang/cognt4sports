#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
This experiment was created using PsychoPy3 Experiment Builder (v2021.2.3),
    on 一月 25, 2022, at 22:19
If you publish work using this script the most relevant publication is:

    Peirce J, Gray JR, Simpson S, MacAskill M, Höchenberger R, Sogo H, Kastman E, Lindeløv JK. (2019) 
        PsychoPy2: Experiments in behavior made easy Behav Res 51: 195. 
        https://doi.org/10.3758/s13428-018-01193-y

"""
from __future__ import absolute_import, division

from psychopy import locale_setup
from psychopy import prefs
from psychopy import sound, gui, visual, core, data, event, logging, clock, colors
from psychopy.constants import (NOT_STARTED, STARTED, PLAYING, PAUSED,
                                STOPPED, FINISHED, PRESSED, RELEASED, FOREVER)

import numpy as np  # whole numpy lib is available, prepend 'np.'
from numpy import (sin, cos, tan, log, log10, pi, average,
                    sqrt, std, deg2rad, rad2deg, linspace, asarray)
from numpy.random import random, randint, normal, shuffle, choice as randchoice
import os  # handy system and path functions
import sys  # to get file system encoding

from psychopy.hardware import keyboard

# Ensure that relative paths start from the same directory as this script
_thisDir = os.path.dirname(os.path.abspath(__file__))
os.chdir(_thisDir)

def flanker():
  

    # Store info about the experiment session
    psychopyVersion = '2021.2.3'
    expName = 'flanker任务'  # from the Builder filename that created this script
    expInfo = {'participant': '', 'age': '', 'gender': '', 'session': '001'}
    dlg = gui.DlgFromDict(dictionary=expInfo, sortKeys=False, title=expName)
    if dlg.OK == False:
        core.quit()  # user pressed cancel
    expInfo['date'] = data.getDateStr()  # add a simple timestamp
    expInfo['expName'] = expName
    expInfo['psychopyVersion'] = psychopyVersion

    # Data file name stem = absolute path + name; later add .psyexp, .csv, .log, etc
    filename = _thisDir + os.sep + \
        u'data/%s_%s_%s' % (expInfo['participant'], expName, expInfo['date'])

    # An ExperimentHandler isn't essential but helps with data saving
    thisExp = data.ExperimentHandler(name=expName, version='',
                                     extraInfo=expInfo, runtimeInfo=None,
                                     originPath='D:\\Python\\sportTest\\flanker\\flanker.py',
                                     savePickle=True, saveWideText=True,
                                     dataFileName=filename)
    # save a log file for detail verbose info
    logFile = logging.LogFile(filename+'.log', level=logging.EXP)
    # this outputs to the screen, not a file
    logging.console.setLevel(logging.WARNING)

    endExpNow = False  # flag for 'escape' or other condition => quit the exp
    frameTolerance = 0.001  # how close to onset before 'same' frame

    # Start Code - component code to be run after the window creation

    # Setup the Window
    win = visual.Window(
        size=[1920, 1080], fullscr=True, screen=0,
        winType='pyglet', allowGUI=False, allowStencil=False,
        monitor='testMonitor', color=[0, 0, 0], colorSpace='rgb',
        blendMode='avg', useFBO=True,
        units='height')
    # store frame rate of monitor if we can measure it
    expInfo['frameRate'] = win.getActualFrameRate()
    if expInfo['frameRate'] != None:
        frameDur = 1.0 / round(expInfo['frameRate'])
    else:
        frameDur = 1.0 / 60.0  # could not measure, so guess

    # Setup eyetracking
    ioDevice = ioConfig = ioSession = ioServer = eyetracker = None

    # create a default keyboard (e.g. to check for escape)
    defaultKeyboard = keyboard.Keyboard()

    # Initialize components for Routine "introduction"
    introductionClock = core.Clock()
    flanker_instruction = visual.TextStim(win=win, name='flanker_instruction',
                                          text='欢迎参加本次实验。\n请注意屏幕中所呈现的字母串（共包含5个字母）\n判断中间字母（即第3个字母）\n如果字母为F，则按F键，如果字母为L，则按L键\n在实验开始前将安排您进行练习熟悉实验操作\n请按空格键进入练习实验。',
                                          font='Open Sans',
                                          pos=(0, 0), height=0.05, wrapWidth=None, ori=0.0,
                                          color='white', colorSpace='rgb', opacity=None,
                                          languageStyle='LTR',
                                          depth=0.0)
    flanker_instruction_resp = keyboard.Keyboard()

    # Initialize components for Routine "fix"
    fixClock = core.Clock()
    flanker_fix = visual.TextStim(win=win, name='flanker_fix',
                                  text='+',
                                  font='Open Sans',
                                  pos=(0, 0), height=0.1, wrapWidth=None, ori=0.0,
                                  color='white', colorSpace='rgb', opacity=None,
                                  languageStyle='LTR',
                                  depth=0.0)

    # Initialize components for Routine "trial"
    trialClock = core.Clock()
    flanker_stimuli = visual.TextStim(win=win, name='flanker_stimuli',
                                      text='',
                                      font='Open Sans',
                                      pos=(0, 0), height=0.15, wrapWidth=None, ori=0.0,
                                      color='white', colorSpace='rgb', opacity=None,
                                      languageStyle='LTR',
                                      depth=0.0)
    flanker_resp = keyboard.Keyboard()

    # Initialize components for Routine "interval"
    intervalClock = core.Clock()
    flanker_interval = visual.TextStim(win=win, name='flanker_interval',
                                       text=None,
                                       font='Open Sans',
                                       pos=(0, 0), height=0.1, wrapWidth=None, ori=0.0,
                                       color='white', colorSpace='rgb', opacity=None,
                                       languageStyle='LTR',
                                       depth=0.0)

    # Initialize components for Routine "ex_introduction"
    ex_introductionClock = core.Clock()
    flanker_ex_introduction = visual.TextStim(win=win, name='flanker_ex_introduction',
                                              text='练习结束。\n按空格键进入正式实验。',
                                              font='Open Sans',
                                              pos=(0, 0), height=0.05, wrapWidth=None, ori=0.0,
                                              color='white', colorSpace='rgb', opacity=None,
                                              languageStyle='LTR',
                                              depth=0.0)
    flanker_start_resp = keyboard.Keyboard()

    # Initialize components for Routine "fix"
    fixClock = core.Clock()
    flanker_fix = visual.TextStim(win=win, name='flanker_fix',
                                  text='+',
                                  font='Open Sans',
                                  pos=(0, 0), height=0.1, wrapWidth=None, ori=0.0,
                                  color='white', colorSpace='rgb', opacity=None,
                                  languageStyle='LTR',
                                  depth=0.0)

    # Initialize components for Routine "trial"
    trialClock = core.Clock()
    flanker_stimuli = visual.TextStim(win=win, name='flanker_stimuli',
                                      text='',
                                      font='Open Sans',
                                      pos=(0, 0), height=0.15, wrapWidth=None, ori=0.0,
                                      color='white', colorSpace='rgb', opacity=None,
                                      languageStyle='LTR',
                                      depth=0.0)
    flanker_resp = keyboard.Keyboard()

    # Initialize components for Routine "interval"
    intervalClock = core.Clock()
    flanker_interval = visual.TextStim(win=win, name='flanker_interval',
                                       text=None,
                                       font='Open Sans',
                                       pos=(0, 0), height=0.1, wrapWidth=None, ori=0.0,
                                       color='white', colorSpace='rgb', opacity=None,
                                       languageStyle='LTR',
                                       depth=0.0)

    # Initialize components for Routine "rest"
    restClock = core.Clock()
    flanker_rest = visual.TextStim(win=win, name='flanker_rest',
                                   text='休息30s',
                                   font='Open Sans',
                                   pos=(0, 0), height=0.05, wrapWidth=None, ori=0.0,
                                   color='white', colorSpace='rgb', opacity=None,
                                   languageStyle='LTR',
                                   depth=0.0)

    # Initialize components for Routine "start"
    startClock = core.Clock()
    flanker_start_text = visual.TextStim(win=win, name='flanker_start_text',
                                         text='按空格键开始',
                                         font='Open Sans',
                                         pos=(0, 0), height=0.05, wrapWidth=None, ori=0.0,
                                         color='white', colorSpace='rgb', opacity=None,
                                         languageStyle='LTR',
                                         depth=0.0)
    flanker_again_resp = keyboard.Keyboard()

    # Initialize components for Routine "fix"
    fixClock = core.Clock()
    flanker_fix = visual.TextStim(win=win, name='flanker_fix',
                                  text='+',
                                  font='Open Sans',
                                  pos=(0, 0), height=0.1, wrapWidth=None, ori=0.0,
                                  color='white', colorSpace='rgb', opacity=None,
                                  languageStyle='LTR',
                                  depth=0.0)

    # Initialize components for Routine "trial"
    trialClock = core.Clock()
    flanker_stimuli = visual.TextStim(win=win, name='flanker_stimuli',
                                      text='',
                                      font='Open Sans',
                                      pos=(0, 0), height=0.15, wrapWidth=None, ori=0.0,
                                      color='white', colorSpace='rgb', opacity=None,
                                      languageStyle='LTR',
                                      depth=0.0)
    flanker_resp = keyboard.Keyboard()

    # Initialize components for Routine "interval"
    intervalClock = core.Clock()
    flanker_interval = visual.TextStim(win=win, name='flanker_interval',
                                       text=None,
                                       font='Open Sans',
                                       pos=(0, 0), height=0.1, wrapWidth=None, ori=0.0,
                                       color='white', colorSpace='rgb', opacity=None,
                                       languageStyle='LTR',
                                       depth=0.0)

    # Initialize components for Routine "end"
    endClock = core.Clock()
    flanker_end = visual.TextStim(win=win, name='flanker_end',
                                  text='实验结束，感谢您的参与！',
                                  font='Open Sans',
                                  pos=(0, 0), height=0.05, wrapWidth=None, ori=0.0,
                                  color='white', colorSpace='rgb', opacity=None,
                                  languageStyle='LTR',
                                  depth=0.0)

    # Create some handy timers
    globalClock = core.Clock()  # to track the time since experiment started
    # to track time remaining of each (non-slip) routine
    routineTimer = core.CountdownTimer()

    # ------Prepare to start Routine "introduction"-------
    continueRoutine = True
    # update component parameters for each repeat
    flanker_instruction_resp.keys = []
    flanker_instruction_resp.rt = []
    _flanker_instruction_resp_allKeys = []
    # keep track of which components have finished
    introductionComponents = [flanker_instruction, flanker_instruction_resp]
    for thisComponent in introductionComponents:
        thisComponent.tStart = None
        thisComponent.tStop = None
        thisComponent.tStartRefresh = None
        thisComponent.tStopRefresh = None
        if hasattr(thisComponent, 'status'):
            thisComponent.status = NOT_STARTED
    # reset timers
    t = 0
    _timeToFirstFrame = win.getFutureFlipTime(clock="now")
    # t0 is time of first possible flip
    introductionClock.reset(-_timeToFirstFrame)
    frameN = -1

    # -------Run Routine "introduction"-------
    while continueRoutine:
        # get current time
        t = introductionClock.getTime()
        tThisFlip = win.getFutureFlipTime(clock=introductionClock)
        tThisFlipGlobal = win.getFutureFlipTime(clock=None)
        # number of completed frames (so 0 is the first frame)
        frameN = frameN + 1
        # update/draw components on each frame

        # *flanker_instruction* updates
        if flanker_instruction.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
            # keep track of start time/frame for later
            flanker_instruction.frameNStart = frameN  # exact frame index
            flanker_instruction.tStart = t  # local t and not account for scr refresh
            flanker_instruction.tStartRefresh = tThisFlipGlobal  # on global time
            # time at next scr refresh
            win.timeOnFlip(flanker_instruction, 'tStartRefresh')
            flanker_instruction.setAutoDraw(True)

        # *flanker_instruction_resp* updates
        waitOnFlip = False
        if flanker_instruction_resp.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
            # keep track of start time/frame for later
            flanker_instruction_resp.frameNStart = frameN  # exact frame index
            flanker_instruction_resp.tStart = t  # local t and not account for scr refresh
            flanker_instruction_resp.tStartRefresh = tThisFlipGlobal  # on global time
            # time at next scr refresh
            win.timeOnFlip(flanker_instruction_resp, 'tStartRefresh')
            flanker_instruction_resp.status = STARTED
            # keyboard checking is just starting
            waitOnFlip = True
            # t=0 on next screen flip
            win.callOnFlip(flanker_instruction_resp.clock.reset)
            # clear events on next screen flip
            win.callOnFlip(flanker_instruction_resp.clearEvents,
                           eventType='keyboard')
        if flanker_instruction_resp.status == STARTED and not waitOnFlip:
            theseKeys = flanker_instruction_resp.getKeys(
                keyList=['space'], waitRelease=False)
            _flanker_instruction_resp_allKeys.extend(theseKeys)
            if len(_flanker_instruction_resp_allKeys):
                # just the last key pressed
                flanker_instruction_resp.keys = _flanker_instruction_resp_allKeys[-1].name
                flanker_instruction_resp.rt = _flanker_instruction_resp_allKeys[-1].rt
                # a response ends the routine
                continueRoutine = False

        # check for quit (typically the Esc key)
        if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
            core.quit()

        # check if all components have finished
        if not continueRoutine:  # a component has requested a forced-end of Routine
            break
        continueRoutine = False  # will revert to True if at least one component still running
        for thisComponent in introductionComponents:
            if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                continueRoutine = True
                break  # at least one component has not yet finished

        # refresh the screen
        if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
            win.flip()

    # -------Ending Routine "introduction"-------
    for thisComponent in introductionComponents:
        if hasattr(thisComponent, "setAutoDraw"):
            thisComponent.setAutoDraw(False)
    thisExp.addData('flanker_instruction.started',
                    flanker_instruction.tStartRefresh)
    thisExp.addData('flanker_instruction.stopped',
                    flanker_instruction.tStopRefresh)
    # check responses
    if flanker_instruction_resp.keys in ['', [], None]:  # No response was made
        flanker_instruction_resp.keys = None
    thisExp.addData('flanker_instruction_resp.keys',
                    flanker_instruction_resp.keys)
    if flanker_instruction_resp.keys != None:  # we had a response
        thisExp.addData('flanker_instruction_resp.rt',
                        flanker_instruction_resp.rt)
    thisExp.addData('flanker_instruction_resp.started',
                    flanker_instruction_resp.tStartRefresh)
    thisExp.addData('flanker_instruction_resp.stopped',
                    flanker_instruction_resp.tStopRefresh)
    thisExp.nextEntry()
    # the Routine "introduction" was not non-slip safe, so reset the non-slip timer
    routineTimer.reset()

    # set up handler to look after randomisation of conditions etc
    practice = data.TrialHandler(nReps=3.0, method='random',
                                 extraInfo=expInfo, originPath=-1,
                                 trialList=data.importConditions(
                                     'stimuli.xlsx'),
                                 seed=None, name='practice')
    thisExp.addLoop(practice)  # add the loop to the experiment
    # so we can initialise stimuli with some values
    thisPractice = practice.trialList[0]
    # abbreviate parameter names if possible (e.g. rgb = thisPractice.rgb)
    if thisPractice != None:
        for paramName in thisPractice:
            exec('{} = thisPractice[paramName]'.format(paramName))

    for thisPractice in practice:
        currentLoop = practice
        # abbreviate parameter names if possible (e.g. rgb = thisPractice.rgb)
        if thisPractice != None:
            for paramName in thisPractice:
                exec('{} = thisPractice[paramName]'.format(paramName))

        # ------Prepare to start Routine "fix"-------
        continueRoutine = True
        routineTimer.add(0.500000)
        # update component parameters for each repeat
        # keep track of which components have finished
        fixComponents = [flanker_fix]
        for thisComponent in fixComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        fixClock.reset(-_timeToFirstFrame)  # t0 is time of first possible flip
        frameN = -1

        # -------Run Routine "fix"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = fixClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=fixClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_fix* updates
            if flanker_fix.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_fix.frameNStart = frameN  # exact frame index
                flanker_fix.tStart = t  # local t and not account for scr refresh
                flanker_fix.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_fix, 'tStartRefresh')
                flanker_fix.setAutoDraw(True)
            if flanker_fix.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_fix.tStartRefresh + 0.5-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_fix.tStop = t  # not accounting for scr refresh
                    flanker_fix.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_fix, 'tStopRefresh')
                    flanker_fix.setAutoDraw(False)

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in fixComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "fix"-------
        for thisComponent in fixComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        practice.addData('flanker_fix.started', flanker_fix.tStartRefresh)
        practice.addData('flanker_fix.stopped', flanker_fix.tStopRefresh)

        # ------Prepare to start Routine "trial"-------
        continueRoutine = True
        routineTimer.add(1.000000)
        # update component parameters for each repeat
        flanker_stimuli.setText(name)
        flanker_resp.keys = []
        flanker_resp.rt = []
        _flanker_resp_allKeys = []
        # keep track of which components have finished
        trialComponents = [flanker_stimuli, flanker_resp]
        for thisComponent in trialComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        # t0 is time of first possible flip
        trialClock.reset(-_timeToFirstFrame)
        frameN = -1

        # -------Run Routine "trial"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = trialClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=trialClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_stimuli* updates
            if flanker_stimuli.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_stimuli.frameNStart = frameN  # exact frame index
                flanker_stimuli.tStart = t  # local t and not account for scr refresh
                flanker_stimuli.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_stimuli, 'tStartRefresh')
                flanker_stimuli.setAutoDraw(True)
            if flanker_stimuli.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_stimuli.tStartRefresh + 1.0-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_stimuli.tStop = t  # not accounting for scr refresh
                    flanker_stimuli.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_stimuli, 'tStopRefresh')
                    flanker_stimuli.setAutoDraw(False)

            # *flanker_resp* updates
            waitOnFlip = False
            if flanker_resp.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_resp.frameNStart = frameN  # exact frame index
                flanker_resp.tStart = t  # local t and not account for scr refresh
                flanker_resp.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_resp, 'tStartRefresh')
                flanker_resp.status = STARTED
                # keyboard checking is just starting
                waitOnFlip = True
                # t=0 on next screen flip
                win.callOnFlip(flanker_resp.clock.reset)
                # clear events on next screen flip
                win.callOnFlip(flanker_resp.clearEvents, eventType='keyboard')
            if flanker_resp.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_resp.tStartRefresh + 1-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_resp.tStop = t  # not accounting for scr refresh
                    flanker_resp.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_resp, 'tStopRefresh')
                    flanker_resp.status = FINISHED
            if flanker_resp.status == STARTED and not waitOnFlip:
                theseKeys = flanker_resp.getKeys(
                    keyList=['l', 'f'], waitRelease=False)
                _flanker_resp_allKeys.extend(theseKeys)
                if len(_flanker_resp_allKeys):
                    # just the last key pressed
                    flanker_resp.keys = _flanker_resp_allKeys[-1].name
                    flanker_resp.rt = _flanker_resp_allKeys[-1].rt
                    # was this correct?
                    if (flanker_resp.keys == str(canswer)) or (flanker_resp.keys == canswer):
                        flanker_resp.corr = 1
                    else:
                        flanker_resp.corr = 0
                    # a response ends the routine
                    continueRoutine = False

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in trialComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "trial"-------
        for thisComponent in trialComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        practice.addData('flanker_stimuli.started',
                         flanker_stimuli.tStartRefresh)
        practice.addData('flanker_stimuli.stopped',
                         flanker_stimuli.tStopRefresh)
        # check responses
        if flanker_resp.keys in ['', [], None]:  # No response was made
            flanker_resp.keys = None
            # was no response the correct answer?!
            if str(canswer).lower() == 'none':
                flanker_resp.corr = 1  # correct non-response
            else:
                flanker_resp.corr = 0  # failed to respond (incorrectly)
        # store data for practice (TrialHandler)
        practice.addData('flanker_resp.keys', flanker_resp.keys)
        practice.addData('flanker_resp.corr', flanker_resp.corr)
        if flanker_resp.keys != None:  # we had a response
            practice.addData('flanker_resp.rt', flanker_resp.rt)
        practice.addData('flanker_resp.started', flanker_resp.tStartRefresh)
        practice.addData('flanker_resp.stopped', flanker_resp.tStopRefresh)

        # ------Prepare to start Routine "interval"-------
        continueRoutine = True
        routineTimer.add(2.000000)
        # update component parameters for each repeat
        # keep track of which components have finished
        intervalComponents = [flanker_interval]
        for thisComponent in intervalComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        # t0 is time of first possible flip
        intervalClock.reset(-_timeToFirstFrame)
        frameN = -1

        # -------Run Routine "interval"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = intervalClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=intervalClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_interval* updates
            if flanker_interval.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_interval.frameNStart = frameN  # exact frame index
                flanker_interval.tStart = t  # local t and not account for scr refresh
                flanker_interval.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_interval, 'tStartRefresh')
                flanker_interval.setAutoDraw(True)
            if flanker_interval.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_interval.tStartRefresh + 2-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_interval.tStop = t  # not accounting for scr refresh
                    flanker_interval.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_interval, 'tStopRefresh')
                    flanker_interval.setAutoDraw(False)

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in intervalComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "interval"-------
        for thisComponent in intervalComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        practice.addData('flanker_interval.started',
                         flanker_interval.tStartRefresh)
        practice.addData('flanker_interval.stopped',
                         flanker_interval.tStopRefresh)
        thisExp.nextEntry()

    # completed 3.0 repeats of 'practice'

    # ------Prepare to start Routine "ex_introduction"-------
    continueRoutine = True
    # update component parameters for each repeat
    flanker_start_resp.keys = []
    flanker_start_resp.rt = []
    _flanker_start_resp_allKeys = []
    # keep track of which components have finished
    ex_introductionComponents = [flanker_ex_introduction, flanker_start_resp]
    for thisComponent in ex_introductionComponents:
        thisComponent.tStart = None
        thisComponent.tStop = None
        thisComponent.tStartRefresh = None
        thisComponent.tStopRefresh = None
        if hasattr(thisComponent, 'status'):
            thisComponent.status = NOT_STARTED
    # reset timers
    t = 0
    _timeToFirstFrame = win.getFutureFlipTime(clock="now")
    # t0 is time of first possible flip
    ex_introductionClock.reset(-_timeToFirstFrame)
    frameN = -1

    # -------Run Routine "ex_introduction"-------
    while continueRoutine:
        # get current time
        t = ex_introductionClock.getTime()
        tThisFlip = win.getFutureFlipTime(clock=ex_introductionClock)
        tThisFlipGlobal = win.getFutureFlipTime(clock=None)
        # number of completed frames (so 0 is the first frame)
        frameN = frameN + 1
        # update/draw components on each frame

        # *flanker_ex_introduction* updates
        if flanker_ex_introduction.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
            # keep track of start time/frame for later
            flanker_ex_introduction.frameNStart = frameN  # exact frame index
            flanker_ex_introduction.tStart = t  # local t and not account for scr refresh
            flanker_ex_introduction.tStartRefresh = tThisFlipGlobal  # on global time
            # time at next scr refresh
            win.timeOnFlip(flanker_ex_introduction, 'tStartRefresh')
            flanker_ex_introduction.setAutoDraw(True)

        # *flanker_start_resp* updates
        waitOnFlip = False
        if flanker_start_resp.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
            # keep track of start time/frame for later
            flanker_start_resp.frameNStart = frameN  # exact frame index
            flanker_start_resp.tStart = t  # local t and not account for scr refresh
            flanker_start_resp.tStartRefresh = tThisFlipGlobal  # on global time
            # time at next scr refresh
            win.timeOnFlip(flanker_start_resp, 'tStartRefresh')
            flanker_start_resp.status = STARTED
            # keyboard checking is just starting
            waitOnFlip = True
            # t=0 on next screen flip
            win.callOnFlip(flanker_start_resp.clock.reset)
            # clear events on next screen flip
            win.callOnFlip(flanker_start_resp.clearEvents,
                           eventType='keyboard')
        if flanker_start_resp.status == STARTED and not waitOnFlip:
            theseKeys = flanker_start_resp.getKeys(
                keyList=['space'], waitRelease=False)
            _flanker_start_resp_allKeys.extend(theseKeys)
            if len(_flanker_start_resp_allKeys):
                # just the last key pressed
                flanker_start_resp.keys = _flanker_start_resp_allKeys[-1].name
                flanker_start_resp.rt = _flanker_start_resp_allKeys[-1].rt
                # a response ends the routine
                continueRoutine = False

        # check for quit (typically the Esc key)
        if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
            core.quit()

        # check if all components have finished
        if not continueRoutine:  # a component has requested a forced-end of Routine
            break
        continueRoutine = False  # will revert to True if at least one component still running
        for thisComponent in ex_introductionComponents:
            if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                continueRoutine = True
                break  # at least one component has not yet finished

        # refresh the screen
        if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
            win.flip()

    # -------Ending Routine "ex_introduction"-------
    for thisComponent in ex_introductionComponents:
        if hasattr(thisComponent, "setAutoDraw"):
            thisComponent.setAutoDraw(False)
    thisExp.addData('flanker_ex_introduction.started',
                    flanker_ex_introduction.tStartRefresh)
    thisExp.addData('flanker_ex_introduction.stopped',
                    flanker_ex_introduction.tStopRefresh)
    # check responses
    if flanker_start_resp.keys in ['', [], None]:  # No response was made
        flanker_start_resp.keys = None
    thisExp.addData('flanker_start_resp.keys', flanker_start_resp.keys)
    if flanker_start_resp.keys != None:  # we had a response
        thisExp.addData('flanker_start_resp.rt', flanker_start_resp.rt)
    thisExp.addData('flanker_start_resp.started',
                    flanker_start_resp.tStartRefresh)
    thisExp.addData('flanker_start_resp.stopped',
                    flanker_start_resp.tStopRefresh)
    thisExp.nextEntry()
    # the Routine "ex_introduction" was not non-slip safe, so reset the non-slip timer
    routineTimer.reset()

    # set up handler to look after randomisation of conditions etc
    flanker_ex1 = data.TrialHandler(nReps=12.0, method='random',
                                    extraInfo=expInfo, originPath=-1,
                                    trialList=data.importConditions(
                                        'stimuli.xlsx'),
                                    seed=None, name='flanker_ex1')
    thisExp.addLoop(flanker_ex1)  # add the loop to the experiment
    # so we can initialise stimuli with some values
    thisFlanker_ex1 = flanker_ex1.trialList[0]
    # abbreviate parameter names if possible (e.g. rgb = thisFlanker_ex1.rgb)
    if thisFlanker_ex1 != None:
        for paramName in thisFlanker_ex1:
            exec('{} = thisFlanker_ex1[paramName]'.format(paramName))

    for thisFlanker_ex1 in flanker_ex1:
        currentLoop = flanker_ex1
        # abbreviate parameter names if possible (e.g. rgb = thisFlanker_ex1.rgb)
        if thisFlanker_ex1 != None:
            for paramName in thisFlanker_ex1:
                exec('{} = thisFlanker_ex1[paramName]'.format(paramName))

        # ------Prepare to start Routine "fix"-------
        continueRoutine = True
        routineTimer.add(0.500000)
        # update component parameters for each repeat
        # keep track of which components have finished
        fixComponents = [flanker_fix]
        for thisComponent in fixComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        fixClock.reset(-_timeToFirstFrame)  # t0 is time of first possible flip
        frameN = -1

        # -------Run Routine "fix"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = fixClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=fixClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_fix* updates
            if flanker_fix.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_fix.frameNStart = frameN  # exact frame index
                flanker_fix.tStart = t  # local t and not account for scr refresh
                flanker_fix.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_fix, 'tStartRefresh')
                flanker_fix.setAutoDraw(True)
            if flanker_fix.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_fix.tStartRefresh + 0.5-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_fix.tStop = t  # not accounting for scr refresh
                    flanker_fix.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_fix, 'tStopRefresh')
                    flanker_fix.setAutoDraw(False)

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in fixComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "fix"-------
        for thisComponent in fixComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        flanker_ex1.addData('flanker_fix.started', flanker_fix.tStartRefresh)
        flanker_ex1.addData('flanker_fix.stopped', flanker_fix.tStopRefresh)

        # ------Prepare to start Routine "trial"-------
        continueRoutine = True
        routineTimer.add(1.000000)
        # update component parameters for each repeat
        flanker_stimuli.setText(name)
        flanker_resp.keys = []
        flanker_resp.rt = []
        _flanker_resp_allKeys = []
        # keep track of which components have finished
        trialComponents = [flanker_stimuli, flanker_resp]
        for thisComponent in trialComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        # t0 is time of first possible flip
        trialClock.reset(-_timeToFirstFrame)
        frameN = -1

        # -------Run Routine "trial"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = trialClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=trialClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_stimuli* updates
            if flanker_stimuli.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_stimuli.frameNStart = frameN  # exact frame index
                flanker_stimuli.tStart = t  # local t and not account for scr refresh
                flanker_stimuli.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_stimuli, 'tStartRefresh')
                flanker_stimuli.setAutoDraw(True)
            if flanker_stimuli.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_stimuli.tStartRefresh + 1.0-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_stimuli.tStop = t  # not accounting for scr refresh
                    flanker_stimuli.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_stimuli, 'tStopRefresh')
                    flanker_stimuli.setAutoDraw(False)

            # *flanker_resp* updates
            waitOnFlip = False
            if flanker_resp.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_resp.frameNStart = frameN  # exact frame index
                flanker_resp.tStart = t  # local t and not account for scr refresh
                flanker_resp.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_resp, 'tStartRefresh')
                flanker_resp.status = STARTED
                # keyboard checking is just starting
                waitOnFlip = True
                # t=0 on next screen flip
                win.callOnFlip(flanker_resp.clock.reset)
                # clear events on next screen flip
                win.callOnFlip(flanker_resp.clearEvents, eventType='keyboard')
            if flanker_resp.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_resp.tStartRefresh + 1-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_resp.tStop = t  # not accounting for scr refresh
                    flanker_resp.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_resp, 'tStopRefresh')
                    flanker_resp.status = FINISHED
            if flanker_resp.status == STARTED and not waitOnFlip:
                theseKeys = flanker_resp.getKeys(
                    keyList=['l', 'f'], waitRelease=False)
                _flanker_resp_allKeys.extend(theseKeys)
                if len(_flanker_resp_allKeys):
                    # just the last key pressed
                    flanker_resp.keys = _flanker_resp_allKeys[-1].name
                    flanker_resp.rt = _flanker_resp_allKeys[-1].rt
                    # was this correct?
                    if (flanker_resp.keys == str(canswer)) or (flanker_resp.keys == canswer):
                        flanker_resp.corr = 1
                    else:
                        flanker_resp.corr = 0
                    # a response ends the routine
                    continueRoutine = False

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in trialComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "trial"-------
        for thisComponent in trialComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        flanker_ex1.addData('flanker_stimuli.started',
                            flanker_stimuli.tStartRefresh)
        flanker_ex1.addData('flanker_stimuli.stopped',
                            flanker_stimuli.tStopRefresh)
        # check responses
        if flanker_resp.keys in ['', [], None]:  # No response was made
            flanker_resp.keys = None
            # was no response the correct answer?!
            if str(canswer).lower() == 'none':
                flanker_resp.corr = 1  # correct non-response
            else:
                flanker_resp.corr = 0  # failed to respond (incorrectly)
        # store data for flanker_ex1 (TrialHandler)
        flanker_ex1.addData('flanker_resp.keys', flanker_resp.keys)
        flanker_ex1.addData('flanker_resp.corr', flanker_resp.corr)
        if flanker_resp.keys != None:  # we had a response
            flanker_ex1.addData('flanker_resp.rt', flanker_resp.rt)
        flanker_ex1.addData('flanker_resp.started', flanker_resp.tStartRefresh)
        flanker_ex1.addData('flanker_resp.stopped', flanker_resp.tStopRefresh)

        # ------Prepare to start Routine "interval"-------
        continueRoutine = True
        routineTimer.add(2.000000)
        # update component parameters for each repeat
        # keep track of which components have finished
        intervalComponents = [flanker_interval]
        for thisComponent in intervalComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        # t0 is time of first possible flip
        intervalClock.reset(-_timeToFirstFrame)
        frameN = -1

        # -------Run Routine "interval"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = intervalClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=intervalClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_interval* updates
            if flanker_interval.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_interval.frameNStart = frameN  # exact frame index
                flanker_interval.tStart = t  # local t and not account for scr refresh
                flanker_interval.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_interval, 'tStartRefresh')
                flanker_interval.setAutoDraw(True)
            if flanker_interval.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_interval.tStartRefresh + 2-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_interval.tStop = t  # not accounting for scr refresh
                    flanker_interval.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_interval, 'tStopRefresh')
                    flanker_interval.setAutoDraw(False)

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in intervalComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "interval"-------
        for thisComponent in intervalComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        flanker_ex1.addData('flanker_interval.started',
                            flanker_interval.tStartRefresh)
        flanker_ex1.addData('flanker_interval.stopped',
                            flanker_interval.tStopRefresh)
        thisExp.nextEntry()

    # completed 12.0 repeats of 'flanker_ex1'

    # ------Prepare to start Routine "rest"-------
    continueRoutine = True
    routineTimer.add(30.000000)
    # update component parameters for each repeat
    # keep track of which components have finished
    restComponents = [flanker_rest]
    for thisComponent in restComponents:
        thisComponent.tStart = None
        thisComponent.tStop = None
        thisComponent.tStartRefresh = None
        thisComponent.tStopRefresh = None
        if hasattr(thisComponent, 'status'):
            thisComponent.status = NOT_STARTED
    # reset timers
    t = 0
    _timeToFirstFrame = win.getFutureFlipTime(clock="now")
    restClock.reset(-_timeToFirstFrame)  # t0 is time of first possible flip
    frameN = -1

    # -------Run Routine "rest"-------
    while continueRoutine and routineTimer.getTime() > 0:
        # get current time
        t = restClock.getTime()
        tThisFlip = win.getFutureFlipTime(clock=restClock)
        tThisFlipGlobal = win.getFutureFlipTime(clock=None)
        # number of completed frames (so 0 is the first frame)
        frameN = frameN + 1
        # update/draw components on each frame

        # *flanker_rest* updates
        if flanker_rest.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
            # keep track of start time/frame for later
            flanker_rest.frameNStart = frameN  # exact frame index
            flanker_rest.tStart = t  # local t and not account for scr refresh
            flanker_rest.tStartRefresh = tThisFlipGlobal  # on global time
            # time at next scr refresh
            win.timeOnFlip(flanker_rest, 'tStartRefresh')
            flanker_rest.setAutoDraw(True)
        if flanker_rest.status == STARTED:
            # is it time to stop? (based on global clock, using actual start)
            if tThisFlipGlobal > flanker_rest.tStartRefresh + 30-frameTolerance:
                # keep track of stop time/frame for later
                flanker_rest.tStop = t  # not accounting for scr refresh
                flanker_rest.frameNStop = frameN  # exact frame index
                # time at next scr refresh
                win.timeOnFlip(flanker_rest, 'tStopRefresh')
                flanker_rest.setAutoDraw(False)

        # check for quit (typically the Esc key)
        if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
            core.quit()

        # check if all components have finished
        if not continueRoutine:  # a component has requested a forced-end of Routine
            break
        continueRoutine = False  # will revert to True if at least one component still running
        for thisComponent in restComponents:
            if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                continueRoutine = True
                break  # at least one component has not yet finished

        # refresh the screen
        if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
            win.flip()

    # -------Ending Routine "rest"-------
    for thisComponent in restComponents:
        if hasattr(thisComponent, "setAutoDraw"):
            thisComponent.setAutoDraw(False)
    thisExp.addData('flanker_rest.started', flanker_rest.tStartRefresh)
    thisExp.addData('flanker_rest.stopped', flanker_rest.tStopRefresh)

    # ------Prepare to start Routine "start"-------
    continueRoutine = True
    # update component parameters for each repeat
    flanker_again_resp.keys = []
    flanker_again_resp.rt = []
    _flanker_again_resp_allKeys = []
    # keep track of which components have finished
    startComponents = [flanker_start_text, flanker_again_resp]
    for thisComponent in startComponents:
        thisComponent.tStart = None
        thisComponent.tStop = None
        thisComponent.tStartRefresh = None
        thisComponent.tStopRefresh = None
        if hasattr(thisComponent, 'status'):
            thisComponent.status = NOT_STARTED
    # reset timers
    t = 0
    _timeToFirstFrame = win.getFutureFlipTime(clock="now")
    startClock.reset(-_timeToFirstFrame)  # t0 is time of first possible flip
    frameN = -1

    # -------Run Routine "start"-------
    while continueRoutine:
        # get current time
        t = startClock.getTime()
        tThisFlip = win.getFutureFlipTime(clock=startClock)
        tThisFlipGlobal = win.getFutureFlipTime(clock=None)
        # number of completed frames (so 0 is the first frame)
        frameN = frameN + 1
        # update/draw components on each frame

        # *flanker_start_text* updates
        if flanker_start_text.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
            # keep track of start time/frame for later
            flanker_start_text.frameNStart = frameN  # exact frame index
            flanker_start_text.tStart = t  # local t and not account for scr refresh
            flanker_start_text.tStartRefresh = tThisFlipGlobal  # on global time
            # time at next scr refresh
            win.timeOnFlip(flanker_start_text, 'tStartRefresh')
            flanker_start_text.setAutoDraw(True)

        # *flanker_again_resp* updates
        waitOnFlip = False
        if flanker_again_resp.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
            # keep track of start time/frame for later
            flanker_again_resp.frameNStart = frameN  # exact frame index
            flanker_again_resp.tStart = t  # local t and not account for scr refresh
            flanker_again_resp.tStartRefresh = tThisFlipGlobal  # on global time
            # time at next scr refresh
            win.timeOnFlip(flanker_again_resp, 'tStartRefresh')
            flanker_again_resp.status = STARTED
            # keyboard checking is just starting
            waitOnFlip = True
            # t=0 on next screen flip
            win.callOnFlip(flanker_again_resp.clock.reset)
            # clear events on next screen flip
            win.callOnFlip(flanker_again_resp.clearEvents,
                           eventType='keyboard')
        if flanker_again_resp.status == STARTED and not waitOnFlip:
            theseKeys = flanker_again_resp.getKeys(
                keyList=['space'], waitRelease=False)
            _flanker_again_resp_allKeys.extend(theseKeys)
            if len(_flanker_again_resp_allKeys):
                # just the last key pressed
                flanker_again_resp.keys = _flanker_again_resp_allKeys[-1].name
                flanker_again_resp.rt = _flanker_again_resp_allKeys[-1].rt
                # a response ends the routine
                continueRoutine = False

        # check for quit (typically the Esc key)
        if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
            core.quit()

        # check if all components have finished
        if not continueRoutine:  # a component has requested a forced-end of Routine
            break
        continueRoutine = False  # will revert to True if at least one component still running
        for thisComponent in startComponents:
            if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                continueRoutine = True
                break  # at least one component has not yet finished

        # refresh the screen
        if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
            win.flip()

    # -------Ending Routine "start"-------
    for thisComponent in startComponents:
        if hasattr(thisComponent, "setAutoDraw"):
            thisComponent.setAutoDraw(False)
    thisExp.addData('flanker_start_text.started',
                    flanker_start_text.tStartRefresh)
    thisExp.addData('flanker_start_text.stopped',
                    flanker_start_text.tStopRefresh)
    # check responses
    if flanker_again_resp.keys in ['', [], None]:  # No response was made
        flanker_again_resp.keys = None
    thisExp.addData('flanker_again_resp.keys', flanker_again_resp.keys)
    if flanker_again_resp.keys != None:  # we had a response
        thisExp.addData('flanker_again_resp.rt', flanker_again_resp.rt)
    thisExp.addData('flanker_again_resp.started',
                    flanker_again_resp.tStartRefresh)
    thisExp.addData('flanker_again_resp.stopped',
                    flanker_again_resp.tStopRefresh)
    thisExp.nextEntry()
    # the Routine "start" was not non-slip safe, so reset the non-slip timer
    routineTimer.reset()

    # set up handler to look after randomisation of conditions etc
    flanker_ex2 = data.TrialHandler(nReps=12.0, method='random',
                                    extraInfo=expInfo, originPath=-1,
                                    trialList=data.importConditions(
                                        'stimuli.xlsx'),
                                    seed=None, name='flanker_ex2')
    thisExp.addLoop(flanker_ex2)  # add the loop to the experiment
    # so we can initialise stimuli with some values
    thisFlanker_ex2 = flanker_ex2.trialList[0]
    # abbreviate parameter names if possible (e.g. rgb = thisFlanker_ex2.rgb)
    if thisFlanker_ex2 != None:
        for paramName in thisFlanker_ex2:
            exec('{} = thisFlanker_ex2[paramName]'.format(paramName))

    for thisFlanker_ex2 in flanker_ex2:
        currentLoop = flanker_ex2
        # abbreviate parameter names if possible (e.g. rgb = thisFlanker_ex2.rgb)
        if thisFlanker_ex2 != None:
            for paramName in thisFlanker_ex2:
                exec('{} = thisFlanker_ex2[paramName]'.format(paramName))

        # ------Prepare to start Routine "fix"-------
        continueRoutine = True
        routineTimer.add(0.500000)
        # update component parameters for each repeat
        # keep track of which components have finished
        fixComponents = [flanker_fix]
        for thisComponent in fixComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        fixClock.reset(-_timeToFirstFrame)  # t0 is time of first possible flip
        frameN = -1

        # -------Run Routine "fix"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = fixClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=fixClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_fix* updates
            if flanker_fix.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_fix.frameNStart = frameN  # exact frame index
                flanker_fix.tStart = t  # local t and not account for scr refresh
                flanker_fix.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_fix, 'tStartRefresh')
                flanker_fix.setAutoDraw(True)
            if flanker_fix.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_fix.tStartRefresh + 0.5-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_fix.tStop = t  # not accounting for scr refresh
                    flanker_fix.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_fix, 'tStopRefresh')
                    flanker_fix.setAutoDraw(False)

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in fixComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "fix"-------
        for thisComponent in fixComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        flanker_ex2.addData('flanker_fix.started', flanker_fix.tStartRefresh)
        flanker_ex2.addData('flanker_fix.stopped', flanker_fix.tStopRefresh)

        # ------Prepare to start Routine "trial"-------
        continueRoutine = True
        routineTimer.add(1.000000)
        # update component parameters for each repeat
        flanker_stimuli.setText(name)
        flanker_resp.keys = []
        flanker_resp.rt = []
        _flanker_resp_allKeys = []
        # keep track of which components have finished
        trialComponents = [flanker_stimuli, flanker_resp]
        for thisComponent in trialComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        # t0 is time of first possible flip
        trialClock.reset(-_timeToFirstFrame)
        frameN = -1

        # -------Run Routine "trial"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = trialClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=trialClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_stimuli* updates
            if flanker_stimuli.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_stimuli.frameNStart = frameN  # exact frame index
                flanker_stimuli.tStart = t  # local t and not account for scr refresh
                flanker_stimuli.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_stimuli, 'tStartRefresh')
                flanker_stimuli.setAutoDraw(True)
            if flanker_stimuli.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_stimuli.tStartRefresh + 1.0-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_stimuli.tStop = t  # not accounting for scr refresh
                    flanker_stimuli.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_stimuli, 'tStopRefresh')
                    flanker_stimuli.setAutoDraw(False)

            # *flanker_resp* updates
            waitOnFlip = False
            if flanker_resp.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_resp.frameNStart = frameN  # exact frame index
                flanker_resp.tStart = t  # local t and not account for scr refresh
                flanker_resp.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_resp, 'tStartRefresh')
                flanker_resp.status = STARTED
                # keyboard checking is just starting
                waitOnFlip = True
                # t=0 on next screen flip
                win.callOnFlip(flanker_resp.clock.reset)
                # clear events on next screen flip
                win.callOnFlip(flanker_resp.clearEvents, eventType='keyboard')
            if flanker_resp.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_resp.tStartRefresh + 1-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_resp.tStop = t  # not accounting for scr refresh
                    flanker_resp.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_resp, 'tStopRefresh')
                    flanker_resp.status = FINISHED
            if flanker_resp.status == STARTED and not waitOnFlip:
                theseKeys = flanker_resp.getKeys(
                    keyList=['l', 'f'], waitRelease=False)
                _flanker_resp_allKeys.extend(theseKeys)
                if len(_flanker_resp_allKeys):
                    # just the last key pressed
                    flanker_resp.keys = _flanker_resp_allKeys[-1].name
                    flanker_resp.rt = _flanker_resp_allKeys[-1].rt
                    # was this correct?
                    if (flanker_resp.keys == str(canswer)) or (flanker_resp.keys == canswer):
                        flanker_resp.corr = 1
                    else:
                        flanker_resp.corr = 0
                    # a response ends the routine
                    continueRoutine = False

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in trialComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "trial"-------
        for thisComponent in trialComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        flanker_ex2.addData('flanker_stimuli.started',
                            flanker_stimuli.tStartRefresh)
        flanker_ex2.addData('flanker_stimuli.stopped',
                            flanker_stimuli.tStopRefresh)
        # check responses
        if flanker_resp.keys in ['', [], None]:  # No response was made
            flanker_resp.keys = None
            # was no response the correct answer?!
            if str(canswer).lower() == 'none':
                flanker_resp.corr = 1  # correct non-response
            else:
                flanker_resp.corr = 0  # failed to respond (incorrectly)
        # store data for flanker_ex2 (TrialHandler)
        flanker_ex2.addData('flanker_resp.keys', flanker_resp.keys)
        flanker_ex2.addData('flanker_resp.corr', flanker_resp.corr)
        if flanker_resp.keys != None:  # we had a response
            flanker_ex2.addData('flanker_resp.rt', flanker_resp.rt)
        flanker_ex2.addData('flanker_resp.started', flanker_resp.tStartRefresh)
        flanker_ex2.addData('flanker_resp.stopped', flanker_resp.tStopRefresh)

        # ------Prepare to start Routine "interval"-------
        continueRoutine = True
        routineTimer.add(2.000000)
        # update component parameters for each repeat
        # keep track of which components have finished
        intervalComponents = [flanker_interval]
        for thisComponent in intervalComponents:
            thisComponent.tStart = None
            thisComponent.tStop = None
            thisComponent.tStartRefresh = None
            thisComponent.tStopRefresh = None
            if hasattr(thisComponent, 'status'):
                thisComponent.status = NOT_STARTED
        # reset timers
        t = 0
        _timeToFirstFrame = win.getFutureFlipTime(clock="now")
        # t0 is time of first possible flip
        intervalClock.reset(-_timeToFirstFrame)
        frameN = -1

        # -------Run Routine "interval"-------
        while continueRoutine and routineTimer.getTime() > 0:
            # get current time
            t = intervalClock.getTime()
            tThisFlip = win.getFutureFlipTime(clock=intervalClock)
            tThisFlipGlobal = win.getFutureFlipTime(clock=None)
            # number of completed frames (so 0 is the first frame)
            frameN = frameN + 1
            # update/draw components on each frame

            # *flanker_interval* updates
            if flanker_interval.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
                # keep track of start time/frame for later
                flanker_interval.frameNStart = frameN  # exact frame index
                flanker_interval.tStart = t  # local t and not account for scr refresh
                flanker_interval.tStartRefresh = tThisFlipGlobal  # on global time
                # time at next scr refresh
                win.timeOnFlip(flanker_interval, 'tStartRefresh')
                flanker_interval.setAutoDraw(True)
            if flanker_interval.status == STARTED:
                # is it time to stop? (based on global clock, using actual start)
                if tThisFlipGlobal > flanker_interval.tStartRefresh + 2-frameTolerance:
                    # keep track of stop time/frame for later
                    flanker_interval.tStop = t  # not accounting for scr refresh
                    flanker_interval.frameNStop = frameN  # exact frame index
                    # time at next scr refresh
                    win.timeOnFlip(flanker_interval, 'tStopRefresh')
                    flanker_interval.setAutoDraw(False)

            # check for quit (typically the Esc key)
            if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
                core.quit()

            # check if all components have finished
            if not continueRoutine:  # a component has requested a forced-end of Routine
                break
            continueRoutine = False  # will revert to True if at least one component still running
            for thisComponent in intervalComponents:
                if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                    continueRoutine = True
                    break  # at least one component has not yet finished

            # refresh the screen
            if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
                win.flip()

        # -------Ending Routine "interval"-------
        for thisComponent in intervalComponents:
            if hasattr(thisComponent, "setAutoDraw"):
                thisComponent.setAutoDraw(False)
        flanker_ex2.addData('flanker_interval.started',
                            flanker_interval.tStartRefresh)
        flanker_ex2.addData('flanker_interval.stopped',
                            flanker_interval.tStopRefresh)
        thisExp.nextEntry()

    # completed 12.0 repeats of 'flanker_ex2'

    # ------Prepare to start Routine "end"-------
    continueRoutine = True
    routineTimer.add(2.000000)
    # update component parameters for each repeat
    # keep track of which components have finished
    endComponents = [flanker_end]
    for thisComponent in endComponents:
        thisComponent.tStart = None
        thisComponent.tStop = None
        thisComponent.tStartRefresh = None
        thisComponent.tStopRefresh = None
        if hasattr(thisComponent, 'status'):
            thisComponent.status = NOT_STARTED
    # reset timers
    t = 0
    _timeToFirstFrame = win.getFutureFlipTime(clock="now")
    endClock.reset(-_timeToFirstFrame)  # t0 is time of first possible flip
    frameN = -1

    # -------Run Routine "end"-------
    while continueRoutine and routineTimer.getTime() > 0:
        # get current time
        t = endClock.getTime()
        tThisFlip = win.getFutureFlipTime(clock=endClock)
        tThisFlipGlobal = win.getFutureFlipTime(clock=None)
        # number of completed frames (so 0 is the first frame)
        frameN = frameN + 1
        # update/draw components on each frame

        # *flanker_end* updates
        if flanker_end.status == NOT_STARTED and tThisFlip >= 0.0-frameTolerance:
            # keep track of start time/frame for later
            flanker_end.frameNStart = frameN  # exact frame index
            flanker_end.tStart = t  # local t and not account for scr refresh
            flanker_end.tStartRefresh = tThisFlipGlobal  # on global time
            # time at next scr refresh
            win.timeOnFlip(flanker_end, 'tStartRefresh')
            flanker_end.setAutoDraw(True)
        if flanker_end.status == STARTED:
            # is it time to stop? (based on global clock, using actual start)
            if tThisFlipGlobal > flanker_end.tStartRefresh + 2-frameTolerance:
                # keep track of stop time/frame for later
                flanker_end.tStop = t  # not accounting for scr refresh
                flanker_end.frameNStop = frameN  # exact frame index
                # time at next scr refresh
                win.timeOnFlip(flanker_end, 'tStopRefresh')
                flanker_end.setAutoDraw(False)

        # check for quit (typically the Esc key)
        if endExpNow or defaultKeyboard.getKeys(keyList=["escape"]):
            core.quit()

        # check if all components have finished
        if not continueRoutine:  # a component has requested a forced-end of Routine
            break
        continueRoutine = False  # will revert to True if at least one component still running
        for thisComponent in endComponents:
            if hasattr(thisComponent, "status") and thisComponent.status != FINISHED:
                continueRoutine = True
                break  # at least one component has not yet finished

        # refresh the screen
        if continueRoutine:  # don't flip if this routine is over or we'll get a blank screen
            win.flip()

    # -------Ending Routine "end"-------
    for thisComponent in endComponents:
        if hasattr(thisComponent, "setAutoDraw"):
            thisComponent.setAutoDraw(False)
    thisExp.addData('flanker_end.started', flanker_end.tStartRefresh)
    thisExp.addData('flanker_end.stopped', flanker_end.tStopRefresh)

    # Flip one final time so any remaining win.callOnFlip()
    # and win.timeOnFlip() tasks get executed before quitting
    win.flip()

    # these shouldn't be strictly necessary (should auto-save)
    thisExp.saveAsWideText(filename+'.csv', delim='auto')
    thisExp.saveAsPickle(filename)
    logging.flush()
    # make sure everything is closed down
    thisExp.abort()  # or data files will save again on exit
    win.close()
    core.quit()
