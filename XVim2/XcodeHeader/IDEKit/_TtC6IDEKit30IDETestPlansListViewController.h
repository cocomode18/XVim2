//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTTableView, NSButton;
@protocol _TtP6IDEKit38IDETestPlansListViewControllerDelegate_, _TtP6IDEKit40IDETestPlansListViewControllerDataSource_;

@interface _TtC6IDEKit30IDETestPlansListViewController : IDEViewController
{
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: delegate
    // Error parsing type: , name: tableView
    // Error parsing type: , name: deleteButton
    // Error parsing type: , name: selectedTestPlanReference
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)reloadData;
@property(nonatomic, retain) NSButton *deleteButton; // @synthesize deleteButton;
@property(nonatomic, retain) DVTTableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak id <_TtP6IDEKit38IDETestPlansListViewControllerDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <_TtP6IDEKit40IDETestPlansListViewControllerDataSource_> dataSource; // @synthesize dataSource;

@end
